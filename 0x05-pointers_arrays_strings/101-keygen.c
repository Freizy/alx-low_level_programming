#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: 0
 */
int main(void)
{
	char password[17];

	srand(time(0));

	for (int i = 0; i < 16; i++)
  	{
		int index = rand() % 73;
		char c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};:'\"\\|,.<>/?"[index];
		
		password[i] = c;
	}
	password[16] = '\0';
	printf("Generated password: %s\n", password);
	return (0);
}
