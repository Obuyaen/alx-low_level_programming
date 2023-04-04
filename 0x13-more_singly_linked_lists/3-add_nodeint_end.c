#include "lists.h"
/**
 *add_nodeint_end-adds a new node at the end of a listint_tlist
 *@head:points to the first node in the added node
 *@n:data added in the addded node
 *Return:pointer to the new node, NULL if fail
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *added;
listint_t *swpvar = *head;
added = malloc(sizeof(listint_t));
if (!added)
{
return (NULL);
}
added->n = n;
added->next = NULL;
if (*head == NULL)
{
*head = added;
}
return (added);
while (swpvar->next)
{
swpvar = swpvar->next;
swpvar->next = added;
}
return (added);

}
