#include <stdio.h>

/**
 * main - the main func
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	int num_1 = 0;
	int num_2;

	while (num_1 <= 98)
	{
		num_2 = num_1 + 1;
		while (num_2 <= 99)
		{
			putchar('0' + (num_1 - num_1 % 10) / 10);
			putchar('0' + (num_1 % 10));
			putchar(' ');
			putchar('0' + (num_2 - num_2 % 10) / 10);
			putchar('0' + (num_2 % 10));
			if (!(num_1 == 98 && num_2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
			num_2 += 1;
		}
		num_1 += 1;
	}
	putchar('\n');
	return (0);
}
