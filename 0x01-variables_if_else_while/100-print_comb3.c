#include <stdio.h>

/**
 * main - the main func
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	int num = 48;
	int num_2 = 49;

	while (num < 57)
	{
		putchar(num);
		putchar(num_2++);

		if (num_2 > 57)
		{
			num++;
			num_2 = num + 1;
		}
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
