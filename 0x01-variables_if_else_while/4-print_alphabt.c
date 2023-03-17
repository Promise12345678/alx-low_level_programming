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
	char lw, e, q;

	e = 'e';
	q = 'q';

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		if (lw != e && lw != q)
			putchar(lw);
	}
		printf("\n");

	return (0);
}
