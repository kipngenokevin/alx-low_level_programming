#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: char pointer to string
 * @f: pointer function returning void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if(f != NULL)
	(*f)(name);
}
