#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first c in s or null
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
