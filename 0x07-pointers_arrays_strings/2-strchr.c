#include "main.h"
#include <stddef.h>
/**
  *_strchr - this function searches for a character in a pointer.
  *@s: string to search from
  *@c: character to search for
  *Return: string or null.
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
