#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: contains the passed number.
 * Return: returns the absolute value.
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
