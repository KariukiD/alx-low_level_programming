#include "main.h"
/**
 * _puts- function for printing a string
 * Description: a program that prints a string
 * followed by a new line
 * @str: the variable for the string
 * return: value
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
