#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(49);
			}
			c = '0' + (j % 10);
			_putchar(c);
		}
		_putchar('\n');
	}
}
