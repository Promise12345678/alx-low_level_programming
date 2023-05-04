#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		num <<= 1;
		num += *b++ - '0';
	}

	return (num);
}
