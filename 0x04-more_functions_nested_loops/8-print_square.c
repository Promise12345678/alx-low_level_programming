#include "main.h"

/**
 * print_square - prints square, then a new line following;
 * @size: size of square, considering, length = width;
 *
 * Return: void;
 */
void print_square(int size)
{
	int l, b;

	if (size <= 0)
		_putchar(10);

	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		_putchar(10);
	}
}
