#include "lists.h"
#include <stdlib.h>
/**
  *sum_listint - sum all of the data in the list
  *@head: Address of the first node of the list
  *Return: Integer
  **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
