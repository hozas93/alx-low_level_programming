#include "main.h"
#include "stdio.h"

/**
 * puts_half - check the code
 * @str: string variable
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int l, m, a;

	while (str[l] != '\0')
	{
		l++;
	}
	l = _strlen(str);
	m = l / 2;
	if (l % 2 == 0)
	{
		for (a = m - 1; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		m = (l - 1) / 2;
	for (a = m - 1; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
