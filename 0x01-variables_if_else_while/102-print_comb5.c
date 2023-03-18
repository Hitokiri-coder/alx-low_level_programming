#include <stdio.h>

/**
 * main - the main func
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	int num = 48;
	int num_2 = 48;
	int num_3 = 48;
	int num_4 = 49;

	while (num <= 57)
	{
		putchar(num);
		putchar(num_2);
		putchar(32);
		putchar(num_3);
		putchar(num_4++);

		if (num_2 == 56 && num_3 == 57 && num_4 > 57)
		{
			num++;
			num_2 = 48;
			num_3 = num;
			num_4 = num_2 +1;
		}
		else if (num_3 == 57 && num_4 > 57)
		{
			num_2++;
			num_3 = num;
			num_4 = num_2 + 1;
		}
		else if (num_4 > 57)
		{
			num_3++;
			num_4 = num_2;
		}
		if (num != 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
