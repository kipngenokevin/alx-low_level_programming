#include <stdio.h>
#include <stdlib.h>
/**
 * main - return sums of inputs
 * @argc: int count of arguments
 * @argv: pointer to arguments passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		j = 0;
		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(arg);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
