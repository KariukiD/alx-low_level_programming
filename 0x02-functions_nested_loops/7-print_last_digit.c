#include "main.h"
#include <stdio.h>
/**
 * _abs - value absolute
 * 
 * @n: The int to print
 * Return: Always ).
 */
int _abs(int n)
{
	int l;
	
	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
