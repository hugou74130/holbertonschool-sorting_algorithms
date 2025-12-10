#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using Insertion sort
 * @list: Pointer to the head of the doubly linked list
 *
 * Description: Uses the Insertion sort algorithm. Swaps nodes (not values).
 * Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *key;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		key = current;
		current = current->next;
		while (key->prev != NULL && key->prev->n > key->n)
		{
			/* Swap nodes */
			if (key->next != NULL)
				key->next->prev = key->prev;
			key->prev->next = key->next;
			key->next = key->prev;
			key->prev = key->prev->prev;
			if (key->prev != NULL)
				key->prev->next = key;
			else
				*list = key;
			print_list(*list);
		}
	}
}
