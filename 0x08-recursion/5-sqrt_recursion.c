#include "main.h"
/**
 * square_root - find the natural square root
 * @n: number
 * @j: incrementor
 * Return: the number found
 */
int square_root(int n, int j)
{
	if (j * j == n)
	{
		return (j);
	}
	else if (j * j < n)
	{
		return (square_root(n, ++j));
	}

	return (-1);
}

/**
 * _sqrt_recursion - function that returns the square root of a natural number
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}

