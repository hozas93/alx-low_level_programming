#include "main.h"
#include <stdio.h>

/**
 * int_strlen - returns the length of a string
 * @s: Parameter
 * @_strlen: function
 * Return: String length
 */
int _strlen(char *s)
{
	int r;

	r = 0;
	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}
