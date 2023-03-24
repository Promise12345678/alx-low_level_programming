#include "main.h"

/**
 * print_triangle - Print a triangle, with a new line following.
 * @size: Size of triangle to be printed.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int c, d;

	if (size <= 0)
		_putchar(10);

	for (c = 0; c < size; c++)
	{
		for (d = (size - 1); d >= 0; d--)
		{
			if (d <= c)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
