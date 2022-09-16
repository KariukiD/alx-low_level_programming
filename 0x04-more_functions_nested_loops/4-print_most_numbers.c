#include "main.h"
/**
 * print_most_numbers - checks numbers
 * Return: success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i !=4)
			_putchar('0' +  i);
	}
	_putchar('\n')
}
			
