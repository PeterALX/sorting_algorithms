#include "sort.h"

/**
 * bubble_sort - sort an array using the bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1 - i ; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			return;
	}
}
