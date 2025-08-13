#include "sort.h"
#include <stdlib.h>
/**
 * insertion_sort_list - sorts a list using insertion algorithm
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *max_node, *current_node;

	if (list == NULL)
		exit (99);

	max_node = list;
	current_node = max_node + 1;

	while (current_node != NULL)
	{
		if (current_node->n < max_node->n)
		{
		}
	}
		// Compare current node i to highest value in sorted list
		// While i != NULL
		// If (i->n < i-1->n), locate correct insertion point
		//   compare i->n to i-1->n, i-2->n ...
		//   Insert node i before node x when (i->n < x->n)
		//   nb: doubly linked list
		//   print list
		// Increment to i + 1;
	}
}

