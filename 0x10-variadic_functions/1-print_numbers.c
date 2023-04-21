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
	va_list numbers1;
	unsigned int i;

	va_start(numbers1, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers1, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers1);
	printf("\n");
}
