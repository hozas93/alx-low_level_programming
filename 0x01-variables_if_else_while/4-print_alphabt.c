#include <stdio.h>

/**
 * main - Printing the alphabet
 *
 * Return: Always 0 (Success)
 */

/* main function is void */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
