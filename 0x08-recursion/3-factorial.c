#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @s: input number
 * Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
