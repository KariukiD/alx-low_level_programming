#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - multiplies two numbers
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int *new;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new[i] = ((char *)ptr)[i];
	free(ptr);
	return (new);
}
