#include <stdio.h>

/**
 * main - Lower an Uppercase Alphabet.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	char c;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
