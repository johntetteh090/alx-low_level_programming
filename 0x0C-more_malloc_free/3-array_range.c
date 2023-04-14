#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *p;
	int i, sizee;

	if (min > max)
		return (NULL);
	sizee = (max - min) + 1;
	p = malloc(sizee * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizee && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
