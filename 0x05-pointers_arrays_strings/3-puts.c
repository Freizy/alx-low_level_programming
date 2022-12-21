#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: the length
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

