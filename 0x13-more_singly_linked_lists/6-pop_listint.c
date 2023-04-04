#include "lists.h"
/**
 *pop_listint-deletes the head node of a listint_t linked list
 *and returns the head node’s data (n).
 *@head:pointer to the first node in the linked list
 *Return:head node's data,if empty return 0.
*/
int pop_listint(listint_t **head)
{
listint_t *swpvar;
int intg;
if (!head || !*head)
{
return (0);
}
intg = (*head)->n;
swpvar = (*head)->next;
free(*head);
*head = swpvar;
return (intg);
}
