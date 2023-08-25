#include <stdio.h>
#include "lists.h"

void print(void) __attribute__ ((constructor));

/**
 * print - chechk code
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
