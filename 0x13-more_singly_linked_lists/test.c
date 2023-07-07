#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - prints a linked list, safely
* @head: list of type listint_t to print
* Return: number of nodes in the list
**/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t num = 0;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
num++;
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
break;
}
}

return (num);
}
