#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);
	putchar('\n');
	return;
}
