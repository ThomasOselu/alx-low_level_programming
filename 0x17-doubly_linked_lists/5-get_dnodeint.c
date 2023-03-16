#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - return nth node of linked list
 * @head: dlistint_t
 * @index: unsigned int
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int x = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		if (x == index)
			return (temp);
		x++;
		temp = temp->next;

	}

	return (NULL);

}
