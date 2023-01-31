#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
