#include "lists.h"

/**
 * delete_nodeint_at_index - deleting a node at a given index
 * @head: pointer to head
 * @index: the iven index;
 *
 * Return: 1 if success and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			temp = *head;
			if (i == 0)
			{
				*head = temp->next;
				free(temp);
				return (1);
			}
			current->next = temp->next;
			free(temp);
			return (1);
		}
		else if ((i + 1) == index)
			current = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - counts elements in the linked list
 * @h: head
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count++;
		cursor = cursor->next;
	}
	return (count);
}
