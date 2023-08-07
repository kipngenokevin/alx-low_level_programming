#include <stdio.h>
/**
 * main - returns all arguments passed
 * @argc: int count of all arguments
 * @argv: pointer to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
