#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n * 3 < 1024)
	{
		sum += n * 3;
		n += 1;
	}
	n = 0;
	while (n * 5 < 1024)
	{
		sum += n * 5;
		n += 1;
	}
	printf("%d\n", sum);
	return (0);
}
