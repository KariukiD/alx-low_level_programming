#include "main.h"

/**
 * largest_number - returns largest of 3 numbers
 * @a: first interger
 * @b: second interger
 * @c: third interger
 * Return: largest number
 * */

int largets_number(int a, int b, int c)
{
	int largets;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}