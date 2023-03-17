#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Pc = 'a';

	while (Pc <= 'z')
	{
		putchar(Pc);
		Pc++;
	}
	putchar('\n');
	return (0);
}
