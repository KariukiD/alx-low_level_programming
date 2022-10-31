#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int checker, dif, size;
	unsigned int i, count = 0;

	checker = 1;
	dif = n ^ m;
	size = (sizeof(unsigned long int) * 8);

	for (i = 0; i < size; i++)
	{
		if (checker == (dif & checker))
			count++;
		checker <<= 1;
	}

	return (count);
}

