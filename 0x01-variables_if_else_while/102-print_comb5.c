#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)  
 */ 
int main(void)
{
	int i;

	for (int i = 'o'; i < 100; i++)
	{
		putchar((i/10) + '0');
		putchar((i/10) + '0');
	}
	putchar("\n");
	return (0);
}

