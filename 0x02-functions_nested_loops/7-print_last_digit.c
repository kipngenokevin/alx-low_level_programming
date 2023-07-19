#include "main.h"

/**
 * print_last_digit - function to print the three last digits
 * @n: value of the number
 * Return: last 3 digits of a number
 */

int print_last_digit(int n)
{
	int lst;

	if (n < 0)
		n = -n;
	lst = n % 10;
	if (lst < 0)
		lst = -lst;
	_putchar(lst + '0');
	return (lst);
}
