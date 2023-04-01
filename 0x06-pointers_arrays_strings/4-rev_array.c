#include "main.h"

/**
 * reverse_array - reverse an array of type int
 * @a: contains the passed array
 * @n: the number of the first elements of the array that would be reversed
 */
void reverse_array(int *a, int n)
{
	int index_1 = 0;
	int index_2 = n - 1;
	int counter = n / 2;

	while (counter--)
	{
		int index_2_cpy = a[index_2];

		a[index_2] = a[index_1];
		a[index_1] = index_2_cpy;
		index_1++;
		index_2--;
	}
}
