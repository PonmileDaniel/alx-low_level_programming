#include <unistd.h>

/**
 * _putchar - character c
 * @c: The character to print
 * Return: Success 1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
