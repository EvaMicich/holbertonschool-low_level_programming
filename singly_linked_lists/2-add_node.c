#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - new node to begining of list_t
 *
 * @head: pointer to pointer to head of the linked list
 * @str: string to add to node
 * Return: pointer to linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head != NULL && str != NULL)
	{
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
