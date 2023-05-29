#include "main.h"
/**
  *print_rev - this  is a function that prints a string in reverse
  *@s: string to be reversed
  */
void print_rev(char *s)
{
	int i;
	int charsOfStri = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (charsOfStri = i - 1; charsOfStri >= 0; charsOfStri--)
	{
		_putchar(s[charsOfStri]);
	}
	_putchar('\n');
}
