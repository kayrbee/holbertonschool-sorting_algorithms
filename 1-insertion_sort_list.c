#include "sort.h"
#include <stdlib.h>
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
			insert_node(list[j], list[j - 1]);
			printf("%s\n", list);
		}
		i++;
	}
}
