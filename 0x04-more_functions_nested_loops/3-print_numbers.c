#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		putchar('0' + ch);
	putchar('\n');
	return;
}
