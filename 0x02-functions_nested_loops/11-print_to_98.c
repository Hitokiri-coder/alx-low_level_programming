#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98 including the n and 98 numbers.
 * @n: contains: the start number.
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
		n += 1;
	}
	_putchar('\n');
}
