#include "monty.h"
/**
 *add_dnodeint - add a note at the begining of the doubly link list
 *@head: first position of linked list
 *@n: data to store
 *Return: a doubly linked list
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
stack_t *temp;

if (head == NULL)
return (NULL);
temp = malloc(sizeof(stack_t));
if (!temp)
{
dprintf(2, "Error: malloc failed\n");
free_vglo();
exit(EXIT_FAILURE);
}
temp->n = n;
if (*head == NULL)
{
temp->next = *head;
temp->prev = NULL;
*head = temp;
return (*head);
}
(*head)->prev = temp;
temp->next = (*head);
temp->prev = NULL;
*head = temp;
return (*head);
}
