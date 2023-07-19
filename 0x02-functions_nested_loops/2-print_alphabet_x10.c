#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x 10
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;
	char a;

	for (i = 0; i < 10; i++)
	{
		j = 97;
		while (j < 123)
		{
			a = j;
			_putchar (a);
			j++;
		}
		_putchar('\n');
	}
}
