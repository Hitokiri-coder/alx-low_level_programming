#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: the square matrics.
 * @size: size of array.
 */
void print_diagsums(int *a, int size)
{
	int index = 0;
	int add = 0;
	int diag_1 = 0;
	int diag_2 = 0;

	while (index < size)
	{
		diag_1 += a[size * add + index];
		index += 1;
		add += 1;
	}

	index -= 1;
	add = 0;

	while (index >= 0)
	{
		diag_2 += a[(size) * add + index];
		index -= 1;
		add += 1;
	}

	printf("%d, %d\n", diag_1, diag_2);
}
