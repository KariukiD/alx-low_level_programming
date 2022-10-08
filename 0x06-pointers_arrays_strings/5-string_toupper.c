#include "main.h"
/**
 * string_toupper - a function that converts strings to uppercase
 * @r:  character that represents lower case letters
 * Return: (r)
 */
char *string_toupper(char *r)
{
	int i;

	for (i = 0; *(r + i) != '\0'; i++)
		if (*(r + i) >= 'a' && *(r + i) <= 'z')
			*(r + i) -= 32;
	return (r);
}
