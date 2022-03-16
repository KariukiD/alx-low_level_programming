include <stdio.h>
include "main.h"	//included custom header file
/**

 * print_alphabet - Prints the alphabet

 *

 * Return: Always 0.

 */

void print_alphabet(void)

{

	char alphabet = 'a';



	while (alphabet <= 'z')

	{

		_putchar(alphabet);

		alphabet++;

	}

	_putchar('\n');

}
