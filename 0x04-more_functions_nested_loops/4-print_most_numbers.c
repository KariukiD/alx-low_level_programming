#include "main.h"
/**
 * print_most_numbers - checks numbers
 * Return: success
 */
void print_most_numbers(void)
{
	int putchar(ch);

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch != 2 && ch !=4)
			_putchar('0' +  ch);
	}
	_putchar('\n');
}
			
