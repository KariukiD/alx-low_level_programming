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
	int num;

	for (num = '0'; num < '100'; num--)
	{
		putchar(num / 10 + 48);
		putchar(num % 10 + 48);
	}
	putchar(' ');
	putchar(',');
	putchar('\n');
	return (0);
}

