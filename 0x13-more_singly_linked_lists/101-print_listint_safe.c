#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - Insert a new node at a given position.
* @head: Pointer to a pointer to the first node.
* @idx: Index at which the new node should be inserted.
* @n: Data of the new node.
* Return: Address of the new node, or NULL on failure.
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;

if (head == NULL)
return (NULL);

if (idx == 0 || *head == NULL)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}

if (temp == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}

