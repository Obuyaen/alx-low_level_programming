#include "lists.h"
/**
 *find_listint_loop-finds the loop in a linked list
 *@head:pointer to the lists searched for
 *Return:address of node where loop starts,NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ssearch = head;
listint_t *fsearch = head;
if (!head)
{
return (NULL);
}
while (ssearch && fsearch && fsearch->next)
{
fsearch = fsearch->next->next;
ssearch = ssearch->next;
if (fsearch == ssearch)
{
ssearch = head;
while (ssearch != fsearch)
{
ssearch = ssearch->next;
fsearch = fsearch->next;
}
return (fsearch);
}
}
return (NULL);
}
