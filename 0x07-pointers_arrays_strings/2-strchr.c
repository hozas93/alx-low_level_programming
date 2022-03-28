#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: Return (0)
 */
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			s++;
		return (s);
	}
	return (0);
}
