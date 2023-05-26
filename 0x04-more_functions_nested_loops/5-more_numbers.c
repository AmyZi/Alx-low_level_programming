#include "main.h"
/**
  *more_numbers - prints 10 times the number from 1- 14
  *followed by a new line
  */
void more_numbers(void)
{
	int i, il;

	for (i = 1; i <= 10; i++)
	{
		il = 0;
		while (il <= 14)
		{
			if (il >= 10)
			{
			_putchar(il / 10 + '0');
			}
			_putchar(il % 10 + '0');
			il++;
		}
		 _putchar('\n');
	}
}
