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

	if (size < 2)
		return;
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

/**
 * swap - swap the value of two indices in an array
 * @arr: the array
 * @idx1: index 1
 * @idx2: index 2
 */
void swap(int *arr, int idx1, int idx2)
{
	int tmp = arr[idx1];

	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
}
