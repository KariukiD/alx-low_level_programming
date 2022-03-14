#include <stdio.h>

/**

 * main - prints all possible different combinations of three digits.

 *

 * Return: 0 (Success)

 */

int main(void)

{

	int a;

	int b;

	int c;



	for (a = '0'; b <= '9'; a++)

	{

		for (b = '0'; b <= '9'; b++)

		{

			for (c = '0'; c <= '9'; c++)

			{

				if (a < b && a < b)

				{

					putchar(a);

					putchar(b);

					putchar(c);



					if (a != '7')

					{

						putchar(',');

						putchar(' ');



					}

				}

			}

		}

	}

	putchar('\n');

	return (0);

}
