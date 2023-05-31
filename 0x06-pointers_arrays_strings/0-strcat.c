#include "main.h"
/**
  *_strcat - This function concats two strings and returns the destination
  *@dest: first string to concat
  *@src: the other string to concat with
  *Return: result
  */
char *_strcat(char *dest, char *src)
{
	int it4dest;
	int it4src;

	in4dest = 0;
	while (dest[in4dest] != '\0')
	{
		in4dest++;
	}
	it4src = 0;
	while (src[it4src] != '\0')
	{
		in4dest++;
		it4src++;
	}
	dest[it4dest] != '\0';
	return (dest);
}
