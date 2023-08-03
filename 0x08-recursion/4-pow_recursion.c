#include "main.h"
/**
 * _pow_recursion - calculates digits to the power
 * @x: first int
 * @y: power int
 * Return: power multiplication
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
