#include "lists.h"
/**
 *get_nodeint_at_index-returns the nth node of a listint_t
 *linked list
 *@head:points to the first element of the linked lists
 *@index:the index of the nth  node
 *Return:pointer to the nth node,NULL if doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int m = 0;
listint_t *swpvar = head;
while (swpvar && m < index)
{
swpvar = swpvar->next;
m++;
}
return (swpvar ? swpvar : NULL);
}
