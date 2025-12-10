#include "sort.h"

/**
 * lomuto_partition - Partitions array using Lomuto partition scheme
 * @array: Pointer to the array
 * @low: Starting index
 * @high: Ending index
 *
 * Return: Index of the pivot after partitioning
 */
int lomuto_partition(int *array, int low, int high)
{
	int pivot;
	int i;
	int j;
	int temp;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, high + 1);
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, high + 1);

	return (i + 1);
}

/**
 * quick_sort_recursive - Recursively sorts array using Quick sort
 * @array: Pointer to the array
 * @low: Starting index
 * @high: Ending index
 */
void quick_sort_recursive(int *array, int low, int high)
{
	int pivot_idx;

	if (low < high)
	{
		pivot_idx = lomuto_partition(array, low, high);
		quick_sort_recursive(array, low, pivot_idx - 1);
		quick_sort_recursive(array, pivot_idx + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers using Quick sort
 * @array: Pointer to the array to sort
 * @size: Size of the array
 *
 * Description: Uses Quick sort with Lomuto partition scheme.
 * Pivot is always the last element. Prints array after each swap.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1);
}
