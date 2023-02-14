#include "main.h"

/**
 * _memset - fills the first n bytes of memory
 * @n: number of bytes of memory to be filled
 * @s: memory area pointer
 * @b: constant byte
 * Return: pointer to the s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
