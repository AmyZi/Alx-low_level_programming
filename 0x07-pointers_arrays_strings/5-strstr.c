#include "main.h"
/**
  *_strstr - This fuction searches for the first occurence
  *of a string in a substring.
  *@haystack: pointer
  *@needle: pointer to search for
  *Return: result
  */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack;
	char *needlesF = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = needlesF;
		result++;
		haystack = result;
	}
	return (0);
}
