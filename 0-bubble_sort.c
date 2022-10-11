#include "sort.h"

/**
 *bubble_sort- sort stuff
 **array- pointer to array
 *size: sie of the array to be sort
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i,j;
	int temp;

	/** Itirate over whole array **/
	for (i = 0; i < size; i++)
	{
		/** Itirate the swapping **/
		for (j = 0; j < (size - i -1); j++)
		{
			
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
