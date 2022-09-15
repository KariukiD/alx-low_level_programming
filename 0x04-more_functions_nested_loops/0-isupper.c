#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @letter: the character to be tracked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65 && c <= 122) && (c >= 65 && <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
