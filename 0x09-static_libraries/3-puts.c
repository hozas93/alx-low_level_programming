#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string and newline
 * @str: string output
 *
 * Return: No return.
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
