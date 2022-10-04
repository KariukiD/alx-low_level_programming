#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: pointer where we search for character
 * @needle: character we search for
 * Return: null if character is not found otherwise pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1 = haystack - 1;
	int len, count;

	for (len = 0; *(needle + len); len++)
		;
	do {
		s1++;
		for (count = 0; count < len; count++)
			if (*(s1 + count) != *(needle + count))
				break;
		if (count == len)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
