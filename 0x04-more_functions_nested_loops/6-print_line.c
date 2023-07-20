#include "main.h"

/**
 * print_line - prints a line
 * @n: integer with the number of characters
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
