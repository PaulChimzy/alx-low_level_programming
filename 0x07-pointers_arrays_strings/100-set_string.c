#include <stdio.h>
#include "main.h"

/**
 * set_string - sets a pointer to a char
 * @s: pointer to a pointer of a pointer char
 * @to: string to now point to
 */

void set_string(char **s, char *to)
{
	s = &to;
}
