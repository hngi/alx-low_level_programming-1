#include <stdio.h>

/**
 * print_rev - prints in reverse
 * @s: string to be printed
 *
 * Return: string
 */

void print_rev(char *s)
{
        int index = 0, len = 0;

        while (s[index++]) //!= 0)
        {
                //index++;
		len++;
        }

        for (index = len - 1; index >= 0; index--)
        {
                putchar(s[index]);
        }
        putchar('\n');
}

int main()
{
	char *s;
	s = "Juantuah";
	print_rev(s);

	return (0);
}
