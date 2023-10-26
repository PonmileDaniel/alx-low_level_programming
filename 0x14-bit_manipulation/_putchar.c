#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writee th character 
 * @c: The character to be printed
 * Return: On Success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
