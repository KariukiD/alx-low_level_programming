#include "main.h"
#include <stdlib.h>
/**
 * _strdup- a program that returns a pointer to the duplicate of a string
 * @str: pointer to initial string
 * Return: str
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *stringcopy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	stringcopy = (char *)malloc(sizeof(char) * (i + 1));

	if (stringcopy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		stringcopy[j] = str[j];

	return (stringcopy);
}
