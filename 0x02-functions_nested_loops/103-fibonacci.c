#include "main.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers starting with 1, and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int counter = 0;
	long int num_1 = 0;
	long int num_2 = 1;

	while (counter < 50)
	{
		long int result = num_1 + num_2;
		
		printf("%ld", result);
		num_1 = num_2;
		num_2 = result;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
		counter += 1;
	}
}
