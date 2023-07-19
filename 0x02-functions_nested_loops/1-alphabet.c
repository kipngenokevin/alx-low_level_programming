#include "main.h"

/**
 * print_alphabet - in lowercase, followed by a new line.
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char che = 'a';

	while (che <= 'z')
	{
		_putchar (che);
		che++;
	}
	_putchar('\n');
}
