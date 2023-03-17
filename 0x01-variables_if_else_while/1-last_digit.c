#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main- the main function
 * Description: it is the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5", n, num);
	else if (num == 0)
		printf("Last digit of %d is %d and is 0\n", n, num);
	else if (num < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	return (0);
}
