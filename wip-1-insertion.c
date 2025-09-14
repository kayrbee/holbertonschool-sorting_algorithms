#include "sort.h"
#include <stdlib.h>
/**
 * insertion_sort_list - sorts a list using insertion algorithm
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *current, left, right;

	if (list == NULL)
		exit (99);

	sorted = list;
	current = sorted->next;

	while (sorted->next != NULL)
	{
		if (current->n < sorted->n)
		{
			/* Update head of list if needed */
			if (sorted->prev == NULL)
			{
				list = current;
				right = current->next;
				current->next = sorted;
				current->prev = NULL;
				sorted->prev = current;
				sorted->next = right;
				right->prev = sorted;
			}
			/* Otherwise normal node swap */
			else
			{
				left = sorted->prev;
				right = current->next;
				left->next = current;
				current->prev = left;
				current->next = sorted;
				sorted->prev = current;
				sorted->next = right;
			}
		}
		printf(list);
		sorted = sorted->next;
		current = sorted->next;
	}
}

