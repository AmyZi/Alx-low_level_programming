#include "main.h"
#include <string.h>
/**
  *_strcmp - this function compares two string
  *@s1: first string to compare
  *@s2:second string to compare
  *Return: result
  */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		result = *s1 - *s2;
	return (result);
}
