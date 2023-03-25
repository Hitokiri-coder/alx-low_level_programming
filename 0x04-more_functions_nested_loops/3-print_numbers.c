#include "main.h"
#include <stdio.h>

/**
 * print_numbers - to print whole nupbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar('0' + a++);
	_putchar('\n');
}
