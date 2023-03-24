#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet letters 10 times.
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int counter;

	for (counter=0; counter < 10; counter++)
	{
		while (a <= 'z')
		{
			_putchar(a++);
		}
		_putchar('\n');
	}
}
