#include "sort.h"
#include <stdio.h> /* For print_array, though it's usually in a header */

/**
 * swap - Swaps two elements in an array and prints the array
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 * @array: The full array (for printing)
 * @size: The size of the full array (for printing)
 */
void swap(int *a, int *b, int *array, size_t size)
{
	int temp;

	if (*a != *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		/* Print the array after each swap as required */
		print_array(array, size);
	}
}

/**
 * lomuto_partition - Partitions a subarray using the Lomuto partition scheme.
 * The pivot is always the last element of the partition.
 * @array: The array to be partitioned.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray (pivot index).
 * @size: The size of the full array (for printing).
 *
 * Return: The final index of the pivot element.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1; /* Index of smaller element */
	int j;

	/*  */

	for (j = low; j < high; j++)
	{
		/* If current element is smaller than the pivot */
		if (array[j] < pivot)
		{
			i++; /* Increment index of smaller element */
			swap(&array[i], &array[j], array, size);
		}
	}

	/* Place the pivot in the correct sorted position */
	swap(&array[i + 1], &array[high], array, size);

	return (i + 1);
}

/**
 * quick_sort_recursive - Implements the Quick sort algorithm through recursion.
 * @array: The array to be sorted.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 * @size: The size of the full array (for printing).
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		/* pi is partitioning index, array[pi] is now at right place */
		int pi = lomuto_partition(array, low, high, size);

		/* Separately sort elements before partition and after partition */
		quick_sort_recursive(array, low, pi - 1, size);
		quick_sort_recursive(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Implements the Lomuto partition scheme.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, 0, (int)size - 1, size);
}
