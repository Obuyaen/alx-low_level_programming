#include "lists.h"
/**
 *free_listint_safe-function that frees a listint_t list.
 *@h:points to the first node in the linked list
 *Return:the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
size_t numln = 0;
int mns;
listint_t *swpvar;
if (!h || !*h)
{
return (0);
}
while (*h)
{
mns = *h - (*h)->next;
if (mns > 0)
{
swpvar = (*h)->next;
free(*h);
*h = swpvar;
numln++;
}
else
{
free(*h);
*h = NULL;
numln++;
break;
}
}
*h = NULL;
return (numln);
}
