#include "lists.h"

/**
 * sum_dlistint - returns the sum of all node values
 * @head: head of the list
 *
 * Return: sum of the values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
