#include "lists.h"
/**
 *insert_nodeint_at_index-inserts a new node atgiven position
 *@idx:index of the list where the new node
 *@n:data to be added in the new node
 *@head:pointer to the first node in the linked list
 *Return:pointer to the new node,or NULL if none
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int m;
listint_t *added;
listint_t *swpvar = *head;
added = malloc(sizeof(listint_t));
if (!added || !head)
{
return (NULL);
}
added->n = n;
added->next = NULL;
if (idx == 0)
{
added->next = *head;
*head = added;
return (added);
}
for (m = 0; swpvar && m < idx; m++)
{
if (m == idx - 1)
{
added->next = swpvar->next;
swpvar->next = added;
return (added);
}
else
{
swpvar = swpvar->next;
}
}
return (NULL);
}
