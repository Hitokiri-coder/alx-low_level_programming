#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: contains the given str.
 * @needle: contains the substring.
 *
 * Return: the first occurrence of found blabla
 */
char *_strstr(char *haystack, char *needle)
{
	int counter_1 = 0;
	int counter_2 = 0;

	while (counter_1 < _strlen(haystack))
	{
		if (haystack[counter_1] == '\0')
			counter_1 += 1;
		else if (needle[counter_2] == '\0')
			counter_2 += 1;
		else if (counter_2 == _strlen(needle) - 1)
		{
			if (needle[counter_2] == haystack[counter_1])
				return (haystack + counter_1 - counter_2);
		}
		else if (needle[counter_2] == haystack[counter_1])
		{
			counter_2 += 1;
			counter_1 += 1;
		}
		else if (haystack[counter_1] != needle[counter_2])
		{
			counter_2 = 0;
			counter_1 += 1;
		}
	}
	return ('\0');
}

/**
 * _strlen - calculate the length of a given string
 * @s: fixed var that contains the passed string.
 *
 * Return: returns the number of the given characters
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	return (counter);
}
