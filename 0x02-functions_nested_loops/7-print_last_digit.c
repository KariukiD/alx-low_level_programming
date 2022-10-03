#include "main.h"
#include <stdio.h>
/**
 * _abs - value absolute
 * 
 * @n: The int to print
 * Return: Always ).
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
