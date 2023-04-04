#include "lists.h"
/**
 *listint_len-returns the no. of elements in a listint_t list.
 *@h:a linked list of listint_t type to consider
 *Return:no. of elements.
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
