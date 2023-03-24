#include <stdio.h>
#include "main.h"

/**
* print_alphabet - print all the alphabet letter.
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

