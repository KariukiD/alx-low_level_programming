#include "main.h"
/**
 * _abs - takes the absolute value of an integer
 * @n: returns the value of type integer
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
