#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
*array_iterator - this function iterates a parameter on each
* element of an array
*@array: the array to iterate
*@size:  size of array
*@action: pointer function
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
