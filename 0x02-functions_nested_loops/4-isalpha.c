#include "main.h"
/**
  *_isalpha - Checks if character is an alphbet
  *@c: the character to be checked
  *Return: 1 if c is an alphabet or 0 otherwisw
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
