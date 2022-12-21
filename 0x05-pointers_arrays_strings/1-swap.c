#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: first int
 * @b: next int
 * Return: 0
 */
void swap_int(int *a, int *b);
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
