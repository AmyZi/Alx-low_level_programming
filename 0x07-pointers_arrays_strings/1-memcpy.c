#include "main.h"
/**
  *_memcpy - this function copies n bytes from src to dest
  *@dest: destination
  *@src: source
  *@n: number of bytes
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *oriDest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (oriDest);
}
