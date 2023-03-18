#include <stdio.h>

/**
 * main - the main func
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num++);
		if (num != 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
