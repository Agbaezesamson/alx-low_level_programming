#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Determines the count of bits that need to be altered
 * to transition from one number to another
 * @n: the initail number
 * @m: the target  number
 *
 * Return: the number of bits to be flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
