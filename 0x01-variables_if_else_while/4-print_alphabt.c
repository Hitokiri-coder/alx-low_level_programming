#include <stdio.h>

/**
 * main - the main function
 * Description: it do some pullshit
 * Return: returns bla bla bla
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a++);
		else
			a++;
	}
	putchar('\n');
}
