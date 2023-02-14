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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);

}
