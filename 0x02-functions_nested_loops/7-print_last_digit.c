#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @c: contains the passed letter.
 * Return: returns the last digit of a given number.
 */

int print_last_digit(int num)
{
	num %= 10;
	if (num < 0)
		num *= -1;
	return (num);
}
