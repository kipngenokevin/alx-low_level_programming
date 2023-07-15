#include <stdio.h>

/**
 * main - prints out single digits numbers 0-9
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	/* For Loop to print out numbers */
	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
