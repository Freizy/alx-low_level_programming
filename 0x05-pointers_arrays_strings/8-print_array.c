#include "main.h"

/**
 * print_array - print n elem of an arr of ints
 * @n: number of elements
 * @a: array
 * Return: 0;
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");

}
