#include "main.h"
/**
 * malloc_checked - a function allocate memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 * Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
