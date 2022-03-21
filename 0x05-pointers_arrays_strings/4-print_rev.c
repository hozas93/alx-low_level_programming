#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string pointer
 * Return: No return
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
