#include <stdio.h>
#include <limits.h>

void reset_to_98(int *);

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = INT_MAX;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	n = INT_MIN;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
