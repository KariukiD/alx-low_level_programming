#include "main.h"
#include <stdlib.h>
/**
 * str_concat- a function that concatenates strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, c, d;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s3 = malloc((i * sizeof(*s1)) + (j * sizeof(*s2) + 1));

	if (s3 == NULL)
		return (NULL);
	
	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			s3[c] = s1[c];
		else
			s3[c] = s2[d++];
	}

	return (s3);
}

