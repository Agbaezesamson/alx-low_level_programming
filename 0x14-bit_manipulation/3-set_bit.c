#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets a specific bit at a given index to 1.
 * @n: Pointer to the number whose bit needs to be changed.
 * @index: The index of the bit to be set to 1.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
