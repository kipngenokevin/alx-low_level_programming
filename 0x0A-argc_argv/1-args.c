#include <stdio.h>
/**
 * main - return the number of args
 * @argc: total no of inputs
 * @argv: pointer to string intput
 * Return: 0 always
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}	
