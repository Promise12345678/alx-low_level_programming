#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char px = 'a', y = 'A';

	for (; px <= 'z'; px++)
		putchar(px);
	for (; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
