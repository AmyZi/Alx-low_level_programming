#include "main.h"
/**
  *_memset- This function fills a pointer string with a
  *given bytes with the number of (n) times.
  *@s: the string pointed to.
  *@b: the character to be filled.
  *@n: the number of time to fill.
  *Return: *s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
