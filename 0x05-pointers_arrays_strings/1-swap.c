#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: pointer value
 * @b: second parameter
 *
 * Return: No return
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
