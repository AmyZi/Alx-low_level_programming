#include "main.h"
/**
* print_square - Prints a square pattern of a specific size.
* @size: The size of the square to be printed.
*
* Description: This function prints a square pattern
*/
void print_square(int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
