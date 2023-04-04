#include "lists.h"
/**
 *add_nodeint-adds a new node at the beginning of a listint_t
 *@head:points to first lists node
 *@n:data to be inserted into the added list.
 *Return:pointer to the added list, if fail NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *added;
added = malloc(sizeof(listint_t));
if (!added)
{
return (NULL);
}
added->n = n;
added->next = *head;
*head = added;
return (added);
}
