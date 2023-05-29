#include "main.h"
/**
  *_puts - this is a function that prints a string
  *@str: string to be printed to stdout
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
