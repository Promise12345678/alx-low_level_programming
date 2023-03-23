#include <stdio.h>

/**
 * main - program will print numbers 1 to 100, with a new line following
 * For multiples of three print Fizz instead of number, for
 * multiples of five print Buzz. For numbers that are multiples of both three
 * and five print FizzBuzz.
 *
 * Return: Always 0;
 */
int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
