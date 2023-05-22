#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all digit from 0-9
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
