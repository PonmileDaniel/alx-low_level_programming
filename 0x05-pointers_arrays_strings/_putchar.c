#include <unistd.h>

/**
 * _putchar - Write a chaacter to the standard output
 * @c: THe character to be written
 * Return: On success, return the character written as an unsigned char cast to an int.
 * On error return-1 and sets
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
