#include "main.h"
/**
* print_most_numbers - Prints a specific set of numbers.
*
* Description: This function prints a specific set of numbers
* based on the given requirements.
*/
void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
{
continue;
}
_putchar(i + '0');
}
_putchar('\n');
}

