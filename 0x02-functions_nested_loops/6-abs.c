#include "main.h"

/**
 * _abs - Show sign of number.
 * @n: integer operand.
 *
 * Description: Determining the negativity/positivity
 * of a number and printing its sign.
 * Return: 1 if +ve, 0 if zero & -1 if negative..
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	
	return (n);
}
