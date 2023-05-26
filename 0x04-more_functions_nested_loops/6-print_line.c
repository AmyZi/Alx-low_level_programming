#include "main.h"
/**
* print_line - Prints a straight line
* @n: The number of times character _ is to be printed
*
* Description: This function draws a straight line
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
