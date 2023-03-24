#include <stdio.h>
#include "main.h"

/**
 * _islower - check the lowercases
 * @c: contains the passed letter.
 */
int _islower(int c)
{
	int result = 0;

	if (c >= 97 && c <= 122)
		result = 1;
	return (result);
}
