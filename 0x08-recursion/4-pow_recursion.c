#include "main.h"
/**
 * _pow_recursion - The exponent of a number
 * @x: Base
 * @y: Exponent
 * Return: value of exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
