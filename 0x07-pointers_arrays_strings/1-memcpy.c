#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest:shows the  memory where its  stored
 *@src:This shows the memory where its copied
 *@n: show the number of the bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
