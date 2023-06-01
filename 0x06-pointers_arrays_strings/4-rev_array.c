#include "main.h"
/**
  *reverse_array - This function reverse the content of an array
  *@a: array of num
  *@n: number of elements to swap
  *Return: nothing
  */
void reverse_array(int *a, int n)
{
	int index, stVa;

	index = 0;
	while (index < n)
	{
		n--;
		stVa = a[index];
		a[index] = a[n];
		a[n] = stVa;
		index++;
	}
}
