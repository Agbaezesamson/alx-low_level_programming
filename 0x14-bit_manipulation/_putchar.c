#include "main.h"
#include <unistd.h>
/**
 * _putchar - This function prints a character to the standard output (stdout).
 * @c: The character to be printed
 *
 * Return: It returns 1 on success.
 * On error, it returns -1, and errno is set as needed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
