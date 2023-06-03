#include "main.h"
/**
*_strcat - This function concats two strings and returns the destination
*@dest: first string to concat
*@src: the other string to concat with
*Return: result
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
