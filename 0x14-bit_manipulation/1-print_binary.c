#include "main.h"
#include <stdio.h>
/**
 * print_re - print binary of a number recursive
 * @n: The number tobe printed
 * Return: void
 */
void print_re(unsigned long int n)
{
	if (n == 0)
		return;
	print_re(n >> 1);
	if ((n & 1) == 0)
		_putchar('0');
	if ((n & 1) == 1)
		_putchar('1');
}
/**
 * print_binary - print out binary
 * @n: decimal to be converted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_re(n);
	}
}
