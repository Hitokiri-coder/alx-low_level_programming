#include <stdio.h>

/**
 * main - the main func
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
