#include "main.h"
/**
  *_strpbrk - this function checks a substring and retunns number or null
  *@s: pointer to string
  *@accept: pointer to a string
  *Return: number or null
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
			s++;
		}
		return (NULL);
}
