#include "main.h"

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

int _isalpha(char s, char kind)
{
	if (kind == 'l' && s >= 97 && s <= 122)
		return (1);
	else if (kind == 'u' && s >= 65 && s <= 90)
		return (1);
	else if (kind == 'b' && ((s >= 65 && s <= 90) || (s >= 97 && s <= 122)))
		return (1);
	else
		return (0);
}

int char_in_str(char letter, char *string)
{
	int counter = 0;

	while (counter < _strlen(string))
	{
		if (string[counter] == letter)
			return (1);
		counter++;
	}
	return (0);
}

char *cap_string(char *str)
{
	int counter = 0;
	char sep[] = " ,\t\n)(.!?;}{\"";

	while (counter < _strlen(str))
	{
		if (counter == 0 && _isalpha(str[counter], 'l') )
			str[counter] = str[counter] - 97 + 65;
		else if (counter > 0 && _isalpha(str[counter], 'l') && char_in_str(str[counter - 1], sep))
			str[counter] = str[counter] - 97 + 65;
		else if (counter > 0 && _isalpha(str[counter], 'u') && !char_in_str(str[counter - 1], sep))
			str[counter] = str[counter] - 65 + 97;
		counter++;
	}
	return (str);
}
