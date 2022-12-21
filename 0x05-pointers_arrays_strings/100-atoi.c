#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to convert
 * Return: int
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int u = 0;
	int x = 1;
	int y = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			x *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			y = 1;
			u = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (y == 1)
		{
			break;
		}

		c++;
	}

	u *= x;
	return (u);
}
