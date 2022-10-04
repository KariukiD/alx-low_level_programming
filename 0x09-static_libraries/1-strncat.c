#include "main.h"
/**
 * _strncat -function that concatenates n bytes of string
 * @n: parameter for bytes
 * @dest: string parameter
 * @src: string parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	/*variables for looping string length*/
	int w;
	int x;

	w = 0;
	while (dest[w] != '\0')
		w++;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[w] = src[x];
		w++;
		x++;
	}
	dest[w] = '\0';
	return (dest);
}
