#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lion, *zebra;

	lion = zebra = head;
	while (lion && zebra && zebra->next)
	{
		lion = lion->next;
		zebra = zebra->next->next;
		if (lion == zebra)
		{
			lion = head;
			break;
		}
	}
	if(lion || !zebra || !zebra->next)
		return (NULL);
	while (lion != zebra)
	{
		lion = lion->next;
		zebra = zebra->next;
	}
	return (zebra);
}
