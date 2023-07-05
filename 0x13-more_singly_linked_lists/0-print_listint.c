#include "lists.h"
#include <stdio.h>

/**
  *print_listint - prints elements of a singly linked list
  *@h: pointer to a list
  *Return: integar
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int count = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		count++;
		tp = tp->next;
	}
	return (count);
}
