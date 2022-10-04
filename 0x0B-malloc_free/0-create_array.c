#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array -a function that creates an array of chars
 * and initializes it with a specific char
 * @size: specifies the size of the array
 * @c: specifies the data type of the array
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(str) * size);
	unsigned int i;

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
