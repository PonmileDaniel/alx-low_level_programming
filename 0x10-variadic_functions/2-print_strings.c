#include "variadic_functions.h"

/**
 * print_strings - This print the string
 * @separator: string that is to be printed btw the string
 * @n: The number of Argument
 * Return: Null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n -  1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}

