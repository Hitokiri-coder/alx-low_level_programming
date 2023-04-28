#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates the given arguments
 * @ac: argument count
 * @av: the given arguments
 *
 * Return: a pointer to the result, Null if ac == 0, or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0;
	int i_2 = 0;
	int conc_i = 0;
	int conc_size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		conc_size += strlen(av[i]) + 1;
		i++;
	}
	str = malloc(conc_size);

	if (!(str))
	{
		free(str);
		return (NULL);
	}

	i = 0;
	while (i < ac)
	{
		i_2 = 0;
		while (i_2 < (int)strlen(av[i]))
		{
			str[conc_i] = av[i][i_2];
			i_2++;
			conc_i++;
		}
		str[conc_i] = '\n';
		conc_i++;
		i++;
	}
	return (str);
}
