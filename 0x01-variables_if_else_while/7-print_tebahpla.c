#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char pc = 'z';

	for (; pc >= 'a'; pc--)
		putchar(pc);
	putchar('\n');
	return (0);
}

