#include "main.h"

/**
 * times_table - print times table :)
 */

void times_table(void)
{
	int num = 0;
	int multi = 0;
	int result;

	while (multi < 10)
	{
		result = num * multi;
		if (num > 0 && result > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (result - result % 10) / 10);
		}
		else if (num > 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + result % 10);
		if (num == 9)
		{
			_putchar('\n');
			num = 0;
			multi += 1;
		}
		else
			num += 1;
	}
}
