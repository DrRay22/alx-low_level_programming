#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name using pointer to function
 * @name: string to add
 * @f: pointer to the printing function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
