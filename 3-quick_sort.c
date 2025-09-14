#include "sort.h"
#include <stdio.h>
/**
 * nb: breaks on arrays that are already sorted
 */

/**
 * swap - swaps two elements in an array and prints the array
 * @array: array of integers
 * @i: first index
 * @j: second index
 * @size: size of the array
 * Return: void
 */
void swap(int *array, size_t i, size_t j, size_t size)
{
	int tmp;

	if (i != j)
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
}

/**
 * lomuto_partition - partitions the array using Lomuto scheme
 * @array: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of the array (for printing)
 * Return: index of pivot after partition
 */
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low;
	size_t j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, i, j, size);
			i++;
		}
	}
	swap(array, i, high, size);
	return i;
}

/**
 * quick_sort_recursive - helper function for quick sort
 * @array: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 * Return: void
 */
void quick_sort_recursive(int *array, size_t low, size_t high, size_t size)
{
	if (low < high)
	{
		size_t pivot_index = lomuto_partition(array, low, high, size);

		/* Avoid underflow when pivot_index is 0 */
		if (pivot_index > 0)
			quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto scheme)
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	
	quick_sort_recursive(array, 0, size - 1, size);
}

