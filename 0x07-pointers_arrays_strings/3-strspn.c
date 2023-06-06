#include "main.h"
/**
  *_strspn - this function scans through a string, coumts the number
  *of consecutive char that belong in a substring
  *@s: sting to scann through
  *@accept: the substring to count
  *Return: number of substring
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match = 1;
	int i;

	while (*s && match)
	{
		match = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				match = 1;
				break;
			}
		}
		s++;
	}
	return (length);
}
