#include "main.h"
/**
 * _isalpha- a program that checks for alphabets
 * @c: char type letter
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	/**
	 * ASCII values for upper case is minimum range
	 * lower values is maximum range
	 */
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

