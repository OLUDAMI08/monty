#include "monty.h"

/**
 * monty_push - Pushes a value to a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void monty_push(stack_t **stack, unsigned int number)
{
	stack_t *tmp, *new;
	int i;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		printf("error");
		return;
	}
	tmp = *stack;

	while (tmp->next)
		tmp = tmp->next;
	new->prev = tmp;
	new->next = NULL;
	tmp->next = new;
}
