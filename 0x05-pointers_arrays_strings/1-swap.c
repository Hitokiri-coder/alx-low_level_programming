#include "main.h"

/**
 * swap_int - to exchange two values
 * @a: contains the first value.
 * @b: contains the second valuse.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
