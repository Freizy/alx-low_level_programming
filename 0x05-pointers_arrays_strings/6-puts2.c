#include "main.h"

/**
 * puts2 - prints every other character
 * @str: char to check
 * Return: 0
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	if (s % 2 == 0)
		_putchar(str[s]);
	_putchar('\n');
}
