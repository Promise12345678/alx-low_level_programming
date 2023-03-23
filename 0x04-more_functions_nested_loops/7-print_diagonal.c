#include "main.h"

/**
 * print_diagonal - draw diagonal line on terminal;
 * @n: length of diagonal;
 *
 * Return: void;
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');

	for (c = 0; c < n; c++)
		for (d = 0; d <= c; d++)
		{
			if (c == d)
			{
				_putchar(92);
				_putchar(10);
			}
			else
				_putchar(32);
		}
}
