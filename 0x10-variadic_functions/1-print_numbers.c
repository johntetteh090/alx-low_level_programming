#include "variadic_functions.h"
#include <stdio.h>
/**
 *  print_numbers - prints out numbers given appropriatly
 * @separator: string to be seperated between numbers
 * @n: number of arguements in the function
 * Return: nothing if null is null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int in;

	va_start(numbers, n);
	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (in < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
