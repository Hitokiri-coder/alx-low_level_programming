#include <stdio.h>

/**
 * main - the main func
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = num_1;
	int num_4 = num_2 + 1;

	while (num_1 < 9 || num_2 < 9)
	{
		putchar('0' + num_1);
		putchar('0' + num_2);
		putchar(' ');
		putchar('0' + num_3);
		putchar('0' + num_4);
		if (!(num_1 == 9 && num_2 == 8 && num_3 == 9 && num_4 == 9))
		{
			putchar(',');
			putchar(' ');
		}
		if (num_2 == 9 && num_3 == 9 && num_4 == 9)
		{
			num_1 += 1;
			num_2 = 0;
			num_3 = num_1;
			num_4 = num_2 + 1;
		}
		else if (num_3 == 9 && num_4 == 9)
		{
			if (num_2 == 8)
			{
				num_2 += 1;
				num_3 = num_1 + 1;
				num_4 = 0;
			}
			else
			{
				num_2 += 1;
				num_3 = num_1;
				num_4 = num_2 + 1;
			}
		}
		else if (num_4 == 9)
		{
			num_3 += 1;
			num_4 = 0;
		}
		else
			num_4 += 1;
	}
	putchar('\n');
	return (0);
}
