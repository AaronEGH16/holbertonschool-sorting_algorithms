#include "sort.h"

/**
 *	bubble_sort - bubble sort style
 *
 *	@array: array of ints to sort
 *	@size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t swap = 1, count;
	int storage = 0;

	if (!array || size == 0)
		exit(1);

	while (swap != 0)
	{
		swap = 0;
		for (count = 0; count < size; count++)
		{
			if (count != size - 1)
				if (array[count] > array[count + 1])
				{
					storage = array[count];
					array[count] = array[count + 1];
					array[count + 1] = storage;
					swap += 1;
					print_array(array, size);
				}
		}
	}
}
