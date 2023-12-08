#include "main.h"

/**
 * get_bit - the value of a bit at an index in a decimal number will be returned
 * @n: search number
 * @index: index of the bit
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
