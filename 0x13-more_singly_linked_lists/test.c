#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

/**
* print_listint_safe - Prints a linked list, safely.
* @head: Pointer to the list of type listint_t to print.
* Return: Number of nodes in the list.
**/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t num = 0;
bool loop_detected = false;
uintptr_t visited_nodes[1024] = {0}; /* Array to store visited nodes */

while (current != NULL)
{
/* Check if the current node has been visited before */
uintptr_t current_node_address = (uintptr_t)current;
size_t index = current_node_address % 1024;

if (visited_nodes[index] == current_node_address)
{
loop_detected = true;
break;
}

/* Add the current node to the visited nodes array */
visited_nodes[index] = current_node_address;

/* Print the current node */
printf("[%p] %d\n", (void *)current, current->n);

/* Move to the next node */
current = current->next;
num++;
}

if (loop_detected)
printf("Loop detected\n");

return (num);
}

