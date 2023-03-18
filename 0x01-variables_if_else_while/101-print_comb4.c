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
	int num_3 = 50;

	while (num < 56)
	{
		putchar(num);
		putchar(num_2);
		putchar(num_3++);

		if (num_2 > 55)
		{
			num++;
			num_2 = num;
		}
		if (num_3 > 57)
		{
			num_2++;
			num_3 = num_2 + 1;
		}
		if (num != 56)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
