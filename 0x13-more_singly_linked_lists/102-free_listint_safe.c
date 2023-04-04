#include "lists.h"
/**
 *free_listint_safe-function that frees a listint_t list.
 *@h:points to the first node in the linked list
 *Return:the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
size_t num = 0;
int minus;
listint_t *swpvar;
if (!h || !*h)
{
return (0);
}
while (*h)
{
minus = *h - (*h)->next;
if (minus > 0)
{
swpvar = (*h)->next;
free(*h);
*h = swpvar;
num++;
}
else
{
free(*h);
*h = NULL;
num++;
break;
}
}
*h = NULL;
return (num);
}
