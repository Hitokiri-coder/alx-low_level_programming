#include "main.h"
#include <stdio.h>

/**
 * set_string - set a the value of a pointer to a char.
 * @s: the pointer that we want to set
 * @to: we are going to use to set the s pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
