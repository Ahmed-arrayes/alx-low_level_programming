#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: head of list. 
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (num != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (num);
}
