#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: integer value of ASCII character
 * Return: 1 positive number 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
