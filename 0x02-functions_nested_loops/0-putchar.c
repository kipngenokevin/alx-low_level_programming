#include "main.h"


/**
 * main - write a program that prints _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char che[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(che[c]);
	}
	_putchar('\n');
	return (0);
}
