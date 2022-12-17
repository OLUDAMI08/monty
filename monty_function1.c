#include "monty.h"

/**
 * monty_push - Pushes a value to a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @data: The current working data of a Monty bytecodes file.
 */
void monty_push(stack_t **stack, unsigned int data)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (*stack == NULL)
		printf("the stack is empty");

	if (new == NULL)
	{
		printf("error");
		return;
	}

	new->n = data;
	new->next = *stack;
	*stack = new;
}

/**
 * monty_pall - prints the values of a stack_t linked list
 *
 * @stack: pointer to the top node of a stack_t linked list
 *
 * @number: the current workinh line number of a monty bytecode file
 *
 */

void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	(void)line_number;
}
