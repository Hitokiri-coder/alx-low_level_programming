#include <stdio.h>
#include "main.h"

/**
 * print_sign - check if a number is positive or negative
 * @n: contains the passed number.
 * Return: returns 1, 0 or -1.
 */

int print_sign(int n)
{
	int result = -1;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
		_putchar('-');
	return (result);
}
