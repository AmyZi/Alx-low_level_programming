#include "main.h"
#include <stdio.h>
/**
  *print_last_digit - prints last digit of a number
  *@n: the number to be printed
  *Return: The value of the last digit
  */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');
	return (ld);
}
