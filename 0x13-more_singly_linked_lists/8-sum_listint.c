#include "lists.h"
/**
 *sum_listint-returns the sum of all the data (n) of listint_t
 *@head:pointer to the first element of linked list
 *Return:sum of all data, 0 empty
*/
int sum_listint(listint_t *head)
{
int result = 0;
listint_t *swpvar = head;
while (swpvar)
{
result += swpvar->n;
swpvar = swpvar->next;
}
return (result);
}
