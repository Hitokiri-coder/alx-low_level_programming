#include "main.h"

/**
 * reset_to_98 - to change the real value in the memory (not taking a copy of it).
 * @n points to the address of the passed value (call by refrence).
 */
void reset_to_98(int *n)
{
	*n = 98;
}
