#include "main.h"
/**
  *string_toupper - This function changes string to uppercase
x *@n: argument to change
*Return: n
  */
char *string_toupper(char *n)
{
	int index = 0;

	while (n[index] != '\0')
	{
		if (n[index] >= 'a' && n[index] <= 'z')
			/*
			   *the difference between upper and lower
			  *in ascii table is 32, thats why its subtracted
			 */
			n[index] = n[index] - 32;
		index++;
	}
	return (n);
}
