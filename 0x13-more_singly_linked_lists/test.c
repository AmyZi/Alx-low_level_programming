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
const listint_t *visited[1024];

while (current != NULL)
{
size_t i;
for (i = 0; i < num; i++)
{
if (current == visited[i])
{
printf("Loop detected\n");
return (num);
}
}
visited[num++] = current;
printf("[%p] %d\n", (void *)current, current->n);


current = current->next;
}

return (num);
}
