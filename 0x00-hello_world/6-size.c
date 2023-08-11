#include <stdio.h>

/**
 * main - Enty point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %1u byte(s)\n", sizeof(char));
	printf("Size of an int: %1u byte(s)\n", sizeof(int));
	printf("Size of a long int: %1u byte(s)\n", sizeof(long));
	printf("Size of a long long int: %1u byte(s)\n", sizeof(long long));
	printf("Size of a float: %1u byte(s)\n", sizeof(float));

	return (0);
}
