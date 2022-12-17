#include "monty.h"

/**
 * monty_push - Pushes a value to a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @value: The current working data of a Monty bytecodes file.
 */

void push(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: unable to allocate memory for new stack node\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = (*stack);
    new_node->next = NULL;

    if (*stack != NULL)
        (*stack)->next = new_node;

    *stack = new_node;
}

/**
 * monty_pall - prints the values of a stack_t linked list
 *
 * @stack: pointer to the top node of a stack_t linked list
 *
 * @line_number: the current workinh line number of a monty bytecode file
 *
 */

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->prev;
    }
}

