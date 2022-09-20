#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *easy = list;
	listint_t *speedy = list;

	if (!list)
		return (0);

	while (easy && speedy && speedy->next)
	{
		easy = easy->next;
		speedy = speedy->next->next;
		if (easy == speedy)
			return (1);
	}
	return (0);
}
