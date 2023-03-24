#include <stdio.h>
#include "main.h"

/**
 * _islower - check the lowercases
 */
int _islower(int c)
{
	int result = 1;

	if (c >= 65 && c <= 90)
		result = 0;
	return (result);
}
