#include "monty.h"
/**
 * free_dlistint - frees the doubly linked list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(stack_t *head)
{
stack_t *tmp;

while ((tmp = head) != NULL)
{
head = head->next;
free(tmp);
}
}
