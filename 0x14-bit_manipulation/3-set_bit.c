#include "main.h"

/**
 * set_bit - sets value of bit at given index
 * @n: where n is a pointer to the number whose bit is
 * to be set
 * @index: the index of bit to set
 *
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index >= (sizeof(unsigned long int) * 8)))
		return (-1);

	*n |= 1UL << index;
	return (1);
}
