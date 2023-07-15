#include <stdio.h>

/**
 * main - writes the alphabet in lowercase and uppercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char lowercase;
	char uppercase;

	/* Here is the for loop function */
	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 65; uppercase <= 90; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
