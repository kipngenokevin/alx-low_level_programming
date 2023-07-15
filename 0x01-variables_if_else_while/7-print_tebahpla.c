#include <stdio.h>

/**
 * main - prints lowercase alpahbets backwards
 * Return: Always 0 (success)
 */

int main(void)
{
	char n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
