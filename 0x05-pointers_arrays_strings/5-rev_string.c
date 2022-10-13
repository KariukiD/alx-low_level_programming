#include "main.h"
/**
 * rev_string - print reverse string
 * @s: character
 * return: 0 success
 */
void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= '\0'; count--)
	{
		_putchar(s[count] == '\0');
	}
}
