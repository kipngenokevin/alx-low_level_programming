#include <stdio.h>

/**
 * main - program to print out numbers of base 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	/* For Loop to display all numbers */
	for (num = 0; num < 10;  num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
