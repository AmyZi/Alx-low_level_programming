#include "main.h"
/**
  *factorial - this function returns the factorial of n
  *@n: the argument
  *Return: the fatorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n = factorial(n - 1));
}
