minclude "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: first string
 * @accept: second string
 * Return: s that matches accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = o, s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
