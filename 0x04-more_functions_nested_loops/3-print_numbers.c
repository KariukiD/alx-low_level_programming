#include "main.h"
/**
 * print_most_numbers - print 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int ch;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
	return;
}
