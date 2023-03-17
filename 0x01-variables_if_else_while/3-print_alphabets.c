#include <stdio.h>

/**
 * main - the main func
 * Description: print chars
 * Return: just close
 */
int main(void)
{
	char c = 97;

	while (c != 'Z')
	{
		putchar(c);
		if (c == 'z')
		{
			c = 'A';
		}
		else
			c++;
	}
	putchar(c);
	putchar('\n');
	return (0);
}
