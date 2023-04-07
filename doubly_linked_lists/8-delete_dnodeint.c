#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node in double linked list given location
 * @head: pointer to the double linked list
 * @index: number of node to remove
 * Return: 1 success, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_ptr;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp_ptr = *head;
	while (index > 0)
	{
		if (tmp_ptr == NULL)
		{
			return (-1);
		}
		tmp_ptr = tmp_ptr->next;
	}
	if (*head == tmp_ptr)
	{
		*head = tmp_ptr->next;
		if (tmp_ptr->next != NULL)
		{
			tmp_ptr->next->prev = NULL;
		}
	}
	else
	{
		tmp_ptr->prev->next = tmp_ptr->next;
		if (tmp_ptr->next == NULL)
		{
			tmp_ptr->next->prev = tmp_ptr->prev;
		}
	}
	free (tmp_ptr);
	return (1);
}
