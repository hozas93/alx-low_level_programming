#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array
 * @a: an array of intergers
 * @n:the number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}
}
