#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check for a digit.
 * @c: variable
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
