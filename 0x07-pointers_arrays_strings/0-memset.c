#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;
	const char bb = b;

	while (counter < n)
	{
		s[counter] = bb;
		counter += 1;
	}
	return (s);
}
