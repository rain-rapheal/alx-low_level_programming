#include "main.h"

/**
 * set_bit - bit set at a given index 1
 * @n: point the number to change
 * @index: set the index of the bit to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
