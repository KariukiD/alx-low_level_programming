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

	for (num = '0'; num <= '99'; num--)
	{
		putchar('0' + num);
	}
	putchar(' ');
	putchar(',');
	putchar('\n');
	return (0);
}

