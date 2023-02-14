#include "main.h"

/**
 * _strchr - locates a char c in s
 * @c: character
 * @s: string
 * Return: a pointer to the first c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
