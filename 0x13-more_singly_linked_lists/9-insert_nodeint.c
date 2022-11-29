#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a node at a given index
 * @head: pointer to the head node
 * @idx: the index to where the node should be added
 * @n: the integer to be added
 *
 * Return: the address of the new node or null if not added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;

	unsigned int y = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (; y < idx - 1 && temp != NULL; y++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
