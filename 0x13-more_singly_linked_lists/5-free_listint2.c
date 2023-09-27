#include "lists.h"

/**
 * free_listint2 - it frees a linked list
 * @head: The pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
