#include <stdio.h>

/**
 * main - the main function
 * @argc: the size of passed arguments
 * @argv: an array or a pointer of pointer(s) for string(s)
 *
 * Return: Always 0 (SUCCESS).
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
