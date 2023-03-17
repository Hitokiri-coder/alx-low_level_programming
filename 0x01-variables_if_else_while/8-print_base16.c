#include <stdio.h>

/**
 * main - the main function
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	char a='0';

	while (a <= 102)
	{
		if (a > 57 && a < 97)
			a++;
		else
			putchar(a++);
	}
	putchar('\n');
	return (0);
}
