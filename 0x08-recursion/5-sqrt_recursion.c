#include "main.h"
/**
 * sqtRecursive - computes square root recursively doing binary search
 * @start: inital number
 * @end: last number within the limit of number
 * @m: given number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqrtRecursive(int start, int end, int m)
{
	long middle;

	if (end >= start)
	{
		middle = start + (end - start) / 2;
		if (middle * middle == m)
			return (middle);
/* following binary search */
		if (middle * middle > m)
		{

			return (sqtRecursive(start, middle - 1, m));
		}
		if (middle * middle < m)
		{
			return (sqtRecursive(middle + 1, end, m));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrtRecursive(2, n, n));
}
