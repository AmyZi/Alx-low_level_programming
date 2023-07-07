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
const listint_t *current = head;
size_t num = 0;
int visited = 0;

while (current != NULL)
{
num++;
printf("[%p] %d\n", (void *)current, current->n);

if (current->next >= current)
{
visited = 1;
break;
}

current = current->next;
}

if (visited)
printf("-> [%p] %d\n", (void *)current->next, current->next->n);

return (num);
}
