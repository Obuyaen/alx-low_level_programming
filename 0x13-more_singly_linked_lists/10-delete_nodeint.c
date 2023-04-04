#include "lists.h"
/**
 *delete_nodeint_at_index-deletes the node at index of lnkd lst
 *@head:points to the first element in the list
 *@index:the node to be deleted index
 *Return:1 on succcess, -1 on fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *swpvar = *head;
listint_t *mpy = NULL;
unsigned int m = 0;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(swpvar);
return (1);
}
while (m < index - 1)
{
if (!swpvar || !(swpvar->next))
{
return (-1);
}
swpvar = swpvar->next;
m++;
}
mpy = swpvar->next;
swpvar->next = mpy->next;
free(mpy);
return (1);
}
