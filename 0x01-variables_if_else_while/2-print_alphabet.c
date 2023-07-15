#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
