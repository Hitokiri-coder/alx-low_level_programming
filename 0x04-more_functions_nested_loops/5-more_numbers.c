#include "main.h"
#include <stdio.h>

/**
 * more_numbers - to print numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int counter = 0;
	int num_1 = '0';
	int num_2 = '0';

	while (counter < 10)
	{
		_putchar(num_1);
		while (num_1 == '9')
		{
			_putchar('1');
			_putchar(num_2);
			if (num_2 == '4')
			{
				counter++;
				num_2 = '0';
				_putchar('\n');
				break;
			}
			else
				num_2++;
		}
		if (num_1 == '9')
			num_1 = '0';
		else
			num_1++;
	}
}
