#include <stdio.h>
#include "main.h"

/**
 * _islower - check the lowercases
 * @c: contains the passed letter. 
 * Return: returns 1 if the letter is lowercase, and 0 if else.
 */
int _islower(int c)
{
	int result = 0;

	if (c >= 97 && c <= 122)
		result = 1;
	return (result);
}
