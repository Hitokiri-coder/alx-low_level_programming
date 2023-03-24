#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - jack fucking time
 */

void jack_bauer(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';

	while (a != '2' || b != '4')
	{
		_putchar(a);
		_putchar(b);
		_putchar(':');
		_putchar(c);
		_putchar(d);
		_putchar('\n');
		if (b == '9' && c == '5' && d == '9')
		{
			a++;
			b = '0';
			c = '0';
			d = '0';
		}
		else if (c == '5' && d == '9')
		{
			b++;
			c = '0';
			d = '0';
		}
		else if (d == '9')
		{
			c++;
			d = 0;
		}
		else
			d++;
	}
}
