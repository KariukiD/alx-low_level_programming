#include "main.h"
/**
 * _puts - prints string
 * @str: - input str
 * Return: no return
 */
void _puts(char *str)
{
	char *str;

	*str = "Holberton!";
	_puts(str);
}
