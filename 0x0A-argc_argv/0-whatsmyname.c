#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of function
 * @argc: count terminal input
 * @argv: pointer to string variables
 * Return: 0 success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	char *c = argv[0];

	while (*c != '\0')
	{
		putchar(*c);
		c++;
	}
	putchar('\n');
	return (0);
}
