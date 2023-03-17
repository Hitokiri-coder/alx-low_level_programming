#include <stdio.h>

/**
 * main - the main func
 * Description: the entry point of the program
 * Return: returns 0 and close
 */
int main(void)
{
        char a = 'z';

        while (a >= 'a')
        {
                putchar(a--);
        }
        putchar('\n');
        return (0);
}
