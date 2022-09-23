#include "main.h"
/**
 * reset_to_98 - check code
 * @n: interger
 * Return: 0 Always
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;
	_putchar(*n);
	reset_to_98(&n);
}
