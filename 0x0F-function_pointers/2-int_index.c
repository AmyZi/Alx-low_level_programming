#include "function_pointers.h"

/**
  *int_index - this function searches for an integer
  *@array: pointer to the array search from
  *@size: size of array
  *@cmp: pointer to funtion cmp
  *Return: first element of array
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] == 1)
				return (i);
				}
				return (-1);
				}
