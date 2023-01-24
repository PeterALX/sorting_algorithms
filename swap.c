#include "sort.h"

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
