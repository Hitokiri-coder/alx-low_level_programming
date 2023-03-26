#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - to print numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar('0' + num++);
		else
			num++;
	}
	_putchar('\n');
}
