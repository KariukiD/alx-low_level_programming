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
	unsigned long int count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	if (count > sizeof(n) * 8
			return (-1);
			return (count);
}
/**
 * flip_bits - flips index to x0r
 * @n: containing the number
 * @m: containing the number
 * Return: the converted number
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (countSetBits(n ^ m));
}

