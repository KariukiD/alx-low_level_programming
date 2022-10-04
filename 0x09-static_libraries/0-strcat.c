#include "main.h"
/**
 * _strcat -concatenate two strings
 * @dest: first input parameter
 * @src: second input parameter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int w; /* getting length of dest*/
	int x;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}

	x = 0;
	while (src[x] != '\0')
	{
		dest[w] = src[x];
		w++;
		x++;
	}
	dest[w] = '\0';

	return (dest);
}

