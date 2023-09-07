#include "sort.h"

/**
 *	selection_sort - selection sort style
 *
 *	@array: array of ints to sort
 *	@size: size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t count1, count2, change;
	int storage = 0;

	if (!array || size == 0)
		exit(1);

	for (count1 = 0; count1 < (size - 1); count1++)
	{
		change = count1;
		for (count2 = count1; count2 < size; count2++)
			if(array[count2] < array[change])
				change = count2;

		if (change != count1)
		{
			storage = array[count1];
			array[count1] = array[change];
			array[change] = storage;
			print_array(array, size);
		}
	}
}
