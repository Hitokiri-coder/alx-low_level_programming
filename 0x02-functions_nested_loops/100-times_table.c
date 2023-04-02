#include "main.h"

/**
 * print_times_table - print n times table :)
 * @n: contains the given number that we will get its times table.
 */

void print_times_table(int n)
{
	int num = 0;
	int multi = 0;
	int result;

	while (multi <= n && n >= 0 && n <= 15)
	{
		result = num * multi;
		if (result > 99)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (result - result % 100) / 100);
			_putchar('0' + ((result - result % 10) % 100) / 10);
		}
		else if (result > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (result - result % 10) / 10);
		}
		else if (num > 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + result % 10);
		if (num == n)
		{
			_putchar('\n');
			num = 0;
			multi += 1;
		}
		else
			num += 1;
	}
}
