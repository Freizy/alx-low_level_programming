#include "main.h"

/*
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 * area src to memory area dest
 * @n: bytes of data
 * @src: memory area - source
 * @dest: memory area - Destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

