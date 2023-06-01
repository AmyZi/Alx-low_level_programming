#include "main.h"
#include <string.h>
/**
*_strncat - This function concats src to dest by a specific number
*@dest: Destination of the string
*@src: Source to concat from
*@n: number of source char appended to dest
*Return: Result
*/
char *_strncat(char *dest, char *src, int n)
{
int index = strlen(dest);
int numOfAppdStr = 0;

while (index < n && *src)
{
dest[index + numOfAppdStr] = *src;
src++;
numOfAppdStr++;
}
dest[index + numOfAppdStr] = '\0';
return (dest);
}
