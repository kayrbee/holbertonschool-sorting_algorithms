#include "sort.h"
#include <stdio.h>
/**
 *
 */
void selection_sort(int *array, size_t size)
{
	int i = 0, j = 1;
	int min, a;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		/* Find min in array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min_index = j;
		}
		if (min_index != i)
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;
			print_array(array, size);
		}
	}
}
