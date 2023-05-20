#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets except q and e
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
