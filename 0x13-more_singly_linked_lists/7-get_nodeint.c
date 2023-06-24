#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 * or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t idx = 0;

	while (head != NULL && idx < index)
	{
		head = head->next;
		idx++;
	}
	if (idx == index)
		return (head);
	return (NULL);

}
