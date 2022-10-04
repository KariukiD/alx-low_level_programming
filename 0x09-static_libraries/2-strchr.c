#include "main.h"
/**
 * _strchr - a function that returns a pointer to the first occurence of a char
 * @s: pointer we search for character
 * @c: the character we search for
 * Return: pointer if present otherwise null
 */
char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
