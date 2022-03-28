#include "main.h"
#include <stdio.h>
/** _memset - fills memory with a constant byte
 * @s: pointer
 * @b: second character variable
 * @n: third character variable
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s)
}
