#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Resets a specific bit in a given number to 0
 * @n: Pointer to the number to be modified
 * @index: The position of the bit to be cleared
 *
 * Return: 1 if successful, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
