#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, string;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	string = n % 10;
	if (string > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, string);
	}
	else if (string == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, string);
	}
	else if (string < 6 && string != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, string);
	}
	return (0);
}
