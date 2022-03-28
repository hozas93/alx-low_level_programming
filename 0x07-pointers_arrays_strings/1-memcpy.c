#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: first variable
 * @src: memory area
 * @n: number of bytes
 *
 * Return: Return(dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
