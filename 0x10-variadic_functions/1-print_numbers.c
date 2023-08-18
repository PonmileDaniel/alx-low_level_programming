#include "variadic_functions.h"

/**
 * print_numbers - prints number
 * @n: number of integer to be printed
 * @separator: Separator to be used.
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
