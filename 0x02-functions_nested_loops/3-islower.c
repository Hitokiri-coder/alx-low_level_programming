#include <stdio.h>
#include "main.h"

/**
 * _islower - check the lowercases
 */
int _islower(int c)
{
	int result = 0;

	if (c >= 65 && c <= 90)
		result = 1;
	return (result);
}
