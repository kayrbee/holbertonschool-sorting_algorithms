#include "sort.h"
#include <stdlib.h>
/**
 * list_len - find the length of a list
 * @list: pointer to list
 * Return: integer equal to length of list
 */
int list_len(*list)
{
	int len = 0;
	listint_t *node;

	while (node != NULL)
	{
		len = 1;
		node = list->next;
	}
	return (len);
}
/**
 * insert_node - insert a node at new location
 * @insert: pointer to node to insert
 * @target: pointer to new location
 * Return: void
 */
void insert_node(*insert, *target, **head)
{
	if (target->prev == NULL)
	{
		tmp = insert->prev;
		insert->prev = NULL;
		insert->next = target;
		target->prev = insert;
		tmp->next = NULL;
		head = insert;
	}
	if (target->next == NULL)
	{}
}
/**
 * insertion_sort_list - sorts a list using insertion algorithm
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	int i = 1, j = 1;

	if (list == NULL)
		exit (99);

	while (i < list_len(list))
	{
		tmp = list[i];
		j = i;
		while (j > 0 && list[j - 1] > tmp)
		{
			// swap & print result
			insert_node(&list[j], &list[j - 1]);
			printf("%s\n", list);
			j--;
		}
		i++;
	}
}
