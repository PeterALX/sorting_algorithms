#include "sort.h"

/**
 * bubble_sort - sort an array using the bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	long unsigned int i;
	long unsigned int j;
	bool swapped;

	for(i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - 1 - i ; j++)
		{
			if (array[j] > array[j + 1])
			{
				print_array(array, size);
				swap(array, j, j + 1);
				swapped = true;
			}
		}
		if (!swapped)
			return;
	}
}
