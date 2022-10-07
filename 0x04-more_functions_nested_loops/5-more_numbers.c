#include "main.h"
/**
 * more numbers - prints numbers 0 to 14
 * 10 times.
 * Return: no return
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; a <= 14; a++)
		{
			if (b >= 10)
			{
				_putchar('0' + b / 10);
				_putchar('0' + b % 10);
			}
			_putchar('\n');
		}
		return;
	}
}

