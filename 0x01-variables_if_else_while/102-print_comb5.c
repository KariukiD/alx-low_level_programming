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

	for (num = '00'; num < '99'; num++)
	{
		putchar((num/10) + '0');
		putchar((num/10) + '0');
	}
	putchar(' ');
	putchar(',');
	putchar('\n');
	return (0);
}

