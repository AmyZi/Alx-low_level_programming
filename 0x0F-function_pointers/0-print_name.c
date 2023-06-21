#include "function_pointers.h"
#include <stdlib.h>
/**
  *print_name - this functions prints a name
  *@name: pointer to name
  *@f: pointer to function
  *@: pointer to xter
  *Return: pointer to name
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
