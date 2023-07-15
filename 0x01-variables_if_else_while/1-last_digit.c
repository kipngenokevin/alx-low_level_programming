#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to variable n
 * check the last digit of the number
 * Return: Always 0 (success)
*/


int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code to find the last number of n */
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	return (0);
}
