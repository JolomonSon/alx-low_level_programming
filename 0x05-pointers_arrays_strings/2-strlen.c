#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *@a: number being swapped
 *@b: number being swapped
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
