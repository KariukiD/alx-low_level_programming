#include "main.h"
/**
 * _strncpy - a function that copies strings
 * @dest: parameter representing strings
 * @src: parameter representing strings
 * @n: parameter for bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; /* variable for looping index*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
