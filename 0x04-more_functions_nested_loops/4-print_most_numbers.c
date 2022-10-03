#include "main.h"
/**
 * print_most_numbers - checks numbers
 * Return: success
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n);
	}
	_putchar('\n');
}
