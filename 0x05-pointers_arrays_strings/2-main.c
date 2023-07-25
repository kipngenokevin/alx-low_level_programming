#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Alwways 0
 */

int main(void)
{
	char *str; /* Pointer variable of type char */
	int len;

	str = "My first strlen!"; /* Array declared using pointer */
	len = _strlen(str); /* check the length of string */
	printf("%d\n", len);
	return (0);

}
