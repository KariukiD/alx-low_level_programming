#include "main.h"
/**
 * _strpbrk - funcction that returns the first occurence of a char in a string
 * @s: pointer to be scanned
 * @accept: character to be found in s
 * Return: null if character is not found otherwise, s
 */
char *_strpbrk(char *s, char *accept)
{
	char *s1 = s - 1;
	int i;

	do {
		s1++;
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s1 == *(accept + i))
				return (s1);
	} while (*s1 != '\0');

	return (0);
}

