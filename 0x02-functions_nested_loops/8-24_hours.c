#include "main.h"

/**
 * jack_bauer - calculate time
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;

	while (i < 3)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(58);
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
