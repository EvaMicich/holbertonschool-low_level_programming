#include "lists.h"
/**
 * get_dnodeint_at_index - accesses given node number
 * @head: pointer to the double linked list
 * @index: the number of requested node
 * Return: addess of given node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int counter;

	ptr = head;
	counter = 0;
	while (ptr->next != NULL)
	{
		if (counter == index)
		{
			return (ptr);
		}
		counter = counter + 1;
		ptr = ptr->next;
	}
	return (NULL);
}
