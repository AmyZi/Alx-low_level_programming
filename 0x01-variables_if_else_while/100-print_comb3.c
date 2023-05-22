#include <stdio.h>
/**
 * main - Entry point
 * Description: progranm that prints all possible comination of two digits
 * Return: Always 0
 */
int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens; ones <= 9; ones++)
		{
			putchar('0' + tens);
			putchar('0' + ones);
			if (tens != 9 || ones != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
