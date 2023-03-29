#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array.
 * @a: contains the passed array.
 * @n: the number of passed array.
 */
void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (counter != n - 1)
			printf("%d, ", a[counter++]);
		else
			printf("%d", a[counter++]);
	}
	printf("\n");
}
