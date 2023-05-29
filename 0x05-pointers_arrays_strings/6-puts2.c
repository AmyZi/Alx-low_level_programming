#include "main.h"
/**
  *puts2 - this is a function that prints every xter of a string
  *@str: string to be printed
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	-putchar('\n');
}
