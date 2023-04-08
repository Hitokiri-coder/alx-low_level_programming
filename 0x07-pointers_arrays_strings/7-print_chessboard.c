#include "main.h"

/**
 * print_chessboard - it just prints chessboard
 * @a: contains the chessboard (2D Array).
 */
void print_chessboard(char (*a)[8])
{
	int counter = 0;

	while (counter < 8)
	{
		int counter_2 = 0;

		while (counter_2 < 8)
		{
			_putchar(a[counter][counter_2]);
			counter_2 += 1;
		}
		_putchar('\n');
		counter += 1;
	}
}
