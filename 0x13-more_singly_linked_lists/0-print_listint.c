#include "lists.h"
/**
 *print_listint-func. that prints all elements in a linked list
 *@h:linked list of listint_t type to be printed.
 *Return:all elements printed
*/
size_t print_listint(const listint_t *h)
{
size_t elem = 0;
while (h)
{
printf("%d\n", h->n);
elem++;
h = h->next;
}
return (elem);
}
