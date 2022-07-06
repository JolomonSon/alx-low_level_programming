#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char l_alph = 'a';	
		char u_alph = 'A';

		while (l_alph <= 'z')
		{
				putchar(l_alph);
				l_alph++;	
		}

		while (u_alph <= 'Z')
		{
				putchar(u_alph);
				u_alph++;
		}
		putchar('\n');
		
		return (0);
}
