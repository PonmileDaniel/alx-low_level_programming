#include "main.h"

/**
 * swap_int - swaps the vaslue of the two integers via the pointers
 * @a: first pointer.
 * @b: second pointer.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
