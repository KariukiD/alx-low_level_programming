#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - a function that converts binary to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len, base_two;

	if (!b)
		return (0);
	num = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			num += base_two;
		}
	}
	return (num);
}
