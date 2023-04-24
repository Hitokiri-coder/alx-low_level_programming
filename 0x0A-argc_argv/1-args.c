#include <stdio.h>

/**
 * main - the main function
 * @argc: the size of passed arguments
 * @argv: an array or a pointer of pointer(s) for string(s)
 *
 * Return: Always 0 (SUCCESS).
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
