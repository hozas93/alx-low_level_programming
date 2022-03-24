#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @c: variable used
 * Return: Always c (Success)
 */
char *string_toupper(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] > 96 && c[a] < 123)
		{
			c[a] -= 32;
		}
	}
	return (c);
}
