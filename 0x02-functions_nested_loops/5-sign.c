#include "main.h"

/**
 * print_sign - Check for lowercase characters.
 * @c: Character operand.
 *
 * Return: 1 for alphabet & 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
