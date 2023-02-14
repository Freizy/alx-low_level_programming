#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first c in s or null
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);

}
