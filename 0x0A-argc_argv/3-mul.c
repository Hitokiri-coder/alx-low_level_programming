#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the size of passed arguments
 * @argv: an array or a pointer of pointer(s) for string(s)
 *
 * Return: Always 0 (SUCCESS).
 */
int main(int argc, char *argv[])
{
	if (argc - 1 == 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (0);
}
