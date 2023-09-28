#include "main.h"
#include <stdio.h>

/**
 * get_bit - This function returns the value of a specific bit
 * at a given index within a decimal num
 * @n: The decimal number to search
 * @index: The index of the bit retrive
 *
 * Return: The value of the requested bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
