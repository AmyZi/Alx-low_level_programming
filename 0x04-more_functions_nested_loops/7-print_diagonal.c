#include "main.h"
/**
* print_diagonal - Prints a diagonal line
* @n: The length of the diagonal line
*
* Description: This function prints a diagonal line consisting
* of a specified number of '\' characters, representing a diagonal
* line on the terminal.
*/
void print_diagonal(int n)
{
	int i;
	int space;

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
