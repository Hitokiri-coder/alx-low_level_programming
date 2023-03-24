#include <stdio.h>
#include "main.h"

/**
 * print_alphabet: Always return an error.
 */
void print_alphabet(void)
{
	char a = 'a';
        while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar('\n');
}
