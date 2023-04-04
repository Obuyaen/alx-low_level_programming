#include "lists.h"
#include<stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 *looped_listint_len-no. of unique codes
 *@head:pointer to the first element in the linked list
 *Return:no. of unique codes or 0 if unlooped.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tnt, *namal;
size_t num = 1;
if (head == NULL || head->next == NULL)
{
return (0);
}
tnt = head->next;
namal = (head->next)->next;
while (namal)
{
if (tnt == namal)
{
tnt = head;
}
while (tnt != namal)
{
num++;
tnt = tnt->next;
namal = namal->next;
}
tnt = tnt->next;
while (tnt != namal)
{
num++;
tnt = tnt->next;
}
return (num);
}
tnt = tnt->next;
namal = (namal->next)->next;
return (0);
}
/**
 *print_listint_safe-func. that prints a listint_t linked list
 *@head:pointer to the first node in the linked list
 *Return:the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t num, pos = 0;
num = looped_listint_len(head);
if (num == 0)
{
for (; head != NULL; num++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (pos = 0; pos < num; pos++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (num);
}
