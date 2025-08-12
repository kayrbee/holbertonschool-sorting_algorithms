#include "sort.h"
#include <stddef.h>
#include <stdio.h>
/**
 * bubble_sort - sort integer array in asc order using bubble sort
 * @array: array of integers
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, iterations = 0, comparison, temp, swap = 0;

	if (array && size > 1)
	{
		comparison = size - 1; // initial value
		while (iterations < size) // (0 < 3)
		{
			while (comparison > 0 && array[i + 1] != '\0') // (2 > 0)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					print_array(array, size);
				}
				i++;
				comparison--;
			}
			i = 0;
			iterations++;
			comparison = (size - 1) - iterations;
		}
	}
}

