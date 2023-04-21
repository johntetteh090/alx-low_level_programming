#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all of the  arguements
 * @n: number of all the arguements
 * Return: 0 is n is 0 or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sume;
	unsigned int i;

	if (n == 0)
		return (0);
	sume = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sume = sume + va_arg(numbers, int);
	}
	va_end(numbers);
	return (sume);
}
