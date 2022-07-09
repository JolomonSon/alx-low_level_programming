#include "main.h"

/**
 * _islower - Alphabet printer.
 *
 * Description: Prints the alphabet in Lower Case
 * using int _putchar(int c).
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return(0);
	}

	return (0);
}
