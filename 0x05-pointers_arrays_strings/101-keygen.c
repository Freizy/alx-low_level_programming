#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: 0
 */
int main(void)
{
char password[84];
	int index = 0, sum = 0, x, y;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		y = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + x))
			{
				password[index] -= x;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + y))
			{
				password[index] -= y;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
