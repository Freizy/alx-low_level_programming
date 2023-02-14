#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first c in s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++
	}
	return ((*s == c) ? s : NULL);
}
