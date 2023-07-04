.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}## This directory contains files from the . . . 
# **0x12. C - Singly linked lists**
### Task and they are:


## 0-print_list.c
## 1-list_len.c
## 2-add_node.c
## 3-add_node_end.c
## 4-free_list.c
## 100-first.c
## 101-hello_holberton.asm
