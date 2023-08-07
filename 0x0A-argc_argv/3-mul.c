#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns multiplication
 * @argc: number of inputs from command line
 * @argv: pointer to strings from terminal
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
