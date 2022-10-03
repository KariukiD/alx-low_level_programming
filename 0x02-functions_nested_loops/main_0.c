#include <limits.h>
#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	{
		_putchar('0' + r);
		_putchar('\n');
	}
	return (0);
}
