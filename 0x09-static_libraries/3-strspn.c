#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the character to be scanned
 * Return: number of characters in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, x, i;

	for (x = 0; s[x] != '\0' && x == count; x++)
		for (i = 0;  accept[i] != '\0'; i++)
			if (s[x] == accept[i])
				count++;
	return (count);
}
