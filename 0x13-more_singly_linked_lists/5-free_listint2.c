#include "lists.h"
/**
 *free_listint2-function that frees a listint_t list.
 *@head:points to a specific listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
listint_t *swpvar;
if (head == NULL)
{
return;
}
while (*head)
{
swpvar = (*head)->next;
free(*head);
*head = swpvar;
}
*head = NULL;
}
