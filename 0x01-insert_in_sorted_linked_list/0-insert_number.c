#include "lists.h"
#include <stdio.h>

/**
 * insert_node - insert a new node in a sort list
 * @head: head of linked list to insert
 * @number: number to insert
 * Return: the insert node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current;
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = number;

	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	current = *head;
	if (newNode)
	{
		while (current)
		{
			if (number <= current->n)
			{
				newNode->next = current;
				*head = newNode;
				return (newNode);
			}
			if ((number >= current->n) && (current->next == NULL))
			{
				newNode->next = NULL;
				current->next = newNode;
				return (newNode);
			}
			if ((number >= current->n) && (number <= current->next->n))
			{
				newNode->next = current->next;
				current->next = newNode;
				return (newNode);
			}
			current = current->next;
		}
	}
	return (NULL);
}

