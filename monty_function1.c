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

/**
 * monty_pall - prints the values of a stack_t linked list
 *
 * @stack: pointer to the top node of a stack_t linked list
 *
 * @line_number: the current workinh line number of a monty bytecode file
 *
 */

void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack)->next;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	(void)line_number;
}
