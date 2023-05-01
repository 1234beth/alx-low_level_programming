#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list safely.
*
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the listint_t list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t node_count = 0;
const listint_t *slow_ptr, *fast_ptr;

if (head == NULL)
exit(98);

slow_ptr = head;
fast_ptr = head->next;

while (fast_ptr != NULL && fast_ptr != slow_ptr)
{
printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
node_count++;
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;
if (fast_ptr != NULL)
fast_ptr = fast_ptr->next;
}

if (fast_ptr != NULL)
{
printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
node_count++;
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;

while (slow_ptr != fast_ptr)
{
printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
node_count++;
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;
}

printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
node_count++;
}

while (slow_ptr != NULL)
{
printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
node_count++;
slow_ptr = slow_ptr->next;
}

return (node_count);
}

