#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for the integer
 * @array: pointer array
 * @size: number of elements in array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: first element index,on success or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int in;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (in = 0; in < size; in++)
	{
		if (cmp(array[in]) != 0)
			return (i);
		if (cmp(array[in]) == 0)
		{

		}

	}
		return (-1);
}
