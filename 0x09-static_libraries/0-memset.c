#include "main.h"
/**
 * _memset - a function that fills n-bytes of memory
 * @s: pointer to the variable b
 * @b: variable used to fill s
 * @n: number of bytes
 * Return: value of pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
