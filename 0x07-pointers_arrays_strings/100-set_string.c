#include "main.h"

/**
 * set_string: This sets the value of a pointer to a char
 * @s: This shows pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}