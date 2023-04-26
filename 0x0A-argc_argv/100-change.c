#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - to get the minimum number of coins
 * @v: the given cents.
 * @coins: number of coins.
 * @sizeof_coins: the size of argument coins.
 *
 * Return: Hard to explain.
 */
int min_coins(int v, int coins[], int sizeof_coins)
{
	int counter = 0;
	int coco;

	if (v < 0)
		return (0);
	else if (v < coins[sizeof_coins - 1])
		return (v);
	while (counter < sizeof_coins)
	{
		if (v >= coins[counter])
		{
			coco = coins[counter] * (v / coins[counter]);
			return (min_coins(v - coco, coins, sizeof_coins) + v / coins[counter]);
		}
		counter++;
	}
	return (0);
}

/**
 * main - the main function
 * @argc: the size of passed arguments
 * @argv: an array or a pointer of pointer(s) for string(s)
 *
 * Return: Always 0 (SUCCESS).
 */
int main(int argc, char *argv[])
{
	int mycoins[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", min_coins(atoi(argv[1]), mycoins, 5));
	return (0);
}
