#include "lists.h"

/**
 * insert_dnodeint_at_index - insertnumber in new node at given node number
 * @h: pointer to the double linked list
 * @idx: the number of requested node
 * @n: number for new node
 * Return: addess of given node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_ptr;
	dlistint_t *new_node;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp_ptr = *h;
	while (idx > 1)
	{
		if (temp_ptr->next == NULL)
		{
			return (NULL);
		}
		temp_ptr = temp_ptr->next;
		idx = idx - 1;
	}
	if (temp_ptr->next == NULL)
	{
		add_dnodeint_end(h, n);
		return (temp_ptr);
	}
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = temp_ptr;
	new_node->next = temp_ptr->next;
	temp_ptr->next->prev = new_node;
	temp_ptr->next = new_node;
	return (new_node);
}
