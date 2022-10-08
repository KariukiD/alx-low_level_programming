#include "main.h"
/**
 * is_prime_number - function that checks for a prime number
 * @n: number to be checked
 * Return: 1 for prime number otherwise 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= i || (n % i == 0))
		return (0);
	else
		return (1);
	i++;

	return (is_prime_number(n));
}
