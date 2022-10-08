#include "main.h"
/**
 * _strcmp - function for comparing two strings
 * @s1: string parameter
 * @s2: string parameter
 * Return: (t) output of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int t;
	int b;

	for (b = 0; b < (s1[b] != '\0'); b++)
	{
		if (s1[b] != s2[b])
			t = s1[b] - s2[b];
		else if (s1[b] == s2[b])
			t = s1[b] - s2[b]
	}

	return (t);
}
