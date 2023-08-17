#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print the name
 * @name: The name which to be printed
 * @f: Point to the function
 * Return: Empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
