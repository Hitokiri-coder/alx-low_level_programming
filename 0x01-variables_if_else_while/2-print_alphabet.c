#include <stdio.h>

/**
 * main - the main function of the program
 * Description: the entry point to display the alphabet chars
 * Return: ends the program
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
		if (character == 'z')
			putchar('\n');
	}
	return (0);
}
