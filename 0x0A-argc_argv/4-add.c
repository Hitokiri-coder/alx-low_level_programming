#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the size of passed arguments
 * @argv: an array or a pointer of pointer(s) for string(s)
 *
 * Return: Always 0 (SUCCESS).
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int counter = 1;
	int sum = 0;

	while (counter < argc)
	{
		int counter_2 = 0;

		while (counter_2 < (int)strlen(argv[counter]))
		{
			if (!isdigit(argv[counter][counter_2]))
			{
				printf("Error\n");
				return (0);
			}
			counter_2++;
		}
		sum += atoi(argv[counter]);
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
