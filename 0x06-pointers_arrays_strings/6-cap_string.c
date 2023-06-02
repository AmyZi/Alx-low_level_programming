#include "main.h"
/**
*cap_string - This function capitalizes every word of a string
*@s: String
*Return: String
*/
char *cap_string(char *s)
{
int index = 0;

while (s[index] != '\0')
{
if ((s[index - 1] == ' ' || s[index - 1] == '\n'
|| s[index - 1] == '\t' || s[index - 1] == ','
|| s[index - 1] == ';' || s[index - 1] == '!'
|| s[index - 1] == '?' || s[index - 1] == '"'
|| s[index - 1] == '(' || s[index - 1] == ')'
|| s[index - 1] == '{' || s[index - 1] == '}'
|| s[index - 1] == '.')
&& (s[index] >= 'a' && s[index] <= 'z'))
{
s[index] = s[index] - 32;
}
else if (index == 0 && (s[index] >= 'a' && s[index] <= 'z'))
{
s[index] = s[index] - 32;
}
else
{
s[index] = s[index];
}
index++;
}

return (s);
}
