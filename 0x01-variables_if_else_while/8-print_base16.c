#include <stdio.h>

/**
 * main - program to print all hex numbers
 * Return: Always 0 (success);
 */

int main(void)
{
	char num;
	char abc;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (abc = 97; abc < 103; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
