#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to Return the sum of all its paramtere
 * @n: TOtal number of argument
 * Return: 1 if not successful and 0 if successful
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);

	}

	va_end(args);
	return (sum);
}

