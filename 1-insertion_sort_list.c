#include "sort.h"
#include <stdlib.h>
/**
 * insertion_sort_list - sorts a list using insertion algorithm
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		insert = tmp->prev;
		while (insert != NULL && tmp->n < insert->n)
		{
			if (tmp->next != NULL)
			{
				tmp->next->prev = insert;
			}
			insert->next = tmp->next;

			tmp->prev = insert->prev;
			tmp->next = insert;
			insert->prev = tmp;

			if (tmp->prev != NULL)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			insert = tmp->prev;
			print_list(*list);
		}
	}
}

