#include "main.h"
#include <string.h>
/**
 *_strncpy -This function copies a string
 *@dest: sting destinaion
 *@src: source to copy from
 *@n: num to copy
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

