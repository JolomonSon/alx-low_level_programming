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
		char alph = 'a';
		char u_alph = 'A';

		while (alph <= 'z')
		{
			putchar(alph);
			alph++;
		}
		while (u_alph <= 'Z')
		{
			putchar(u_alph);
			u_alph++;
		}
		putchar('\n');

		return (0);
}
