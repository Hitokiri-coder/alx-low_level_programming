#include <stdio.h>
#include "main.h"

char a = 'a';
print_alphabet(void)
{
        while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar('\n');
}
