#include <stdio.h>
#include "main.h"

/**
 * _islower - check the lowercases
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		_putchar("1");
	else
		_putchar("0");
}
