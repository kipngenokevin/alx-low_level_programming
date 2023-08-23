#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: char pointer to string
 * @f: pointer function returning void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
