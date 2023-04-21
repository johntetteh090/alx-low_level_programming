#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: seperators
 * @n: number of arguements in the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringse;
	unsigned int i;
	char *ptr;

	va_start(stringse, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(stringse, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(stringse);
	printf("\n");
}
