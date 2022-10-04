#include "main.h"
/**
 * _islower-custom function for lower case letters
 * @c: char type letter
 * Return:(1) if lower case and (0) otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
