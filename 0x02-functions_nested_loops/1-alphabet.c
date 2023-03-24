#include <stdio.h>
#include "main"

/**
* print_alphabet - Always return an error.
* @a: store a letter.
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

