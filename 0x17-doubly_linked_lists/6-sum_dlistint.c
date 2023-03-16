#include "lists.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * sum_dlistint - get sum of all data of linked list
 * @head: dlistint_t
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
