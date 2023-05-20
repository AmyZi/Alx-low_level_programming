#include <stdio.h>
/**
 * main - Entry point
 * Description: progranm that prints all possible comination of two digits
 * Return: Always 0
 */
int main(void)
{
	int tens, ones, twoDigits;

	for (tens = 0; tens < 19; tens++)
		for (ones = 0; ones < 10; ones++)
		{
			twoDigits = (tens * 10) + ones;
			{
			putchar('0' + tens);
			putchar('0' + ones);
			putchar(' ');
			putchar('\n');
			}
		}
	return (0);
}
