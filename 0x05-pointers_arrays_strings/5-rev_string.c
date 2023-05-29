#include "main.h"
#include <stdio.h>
/**
  *rev_string - This is a function that reverses a string
  *@s: string to be reversed
  */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
