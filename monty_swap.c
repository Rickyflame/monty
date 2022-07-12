#include "monty.h"

/**
 * m_swap - swap the top two elements of the stack
 * @stack: pointer to head of the stack
 * @line_number: number of current position
 * Return: void has no return value
 */
vooid m_swap(stack_t **stack, unsigned int line_number)
{
	stact_t *next;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	if (var.stack_len == 2)
	{
		*stack = (*stack)->next;
		return;
	}
	next = (*stack)->next;
	next->prev = (*stack)->prev;
	(*stack)->prev->next = next;
	(*stack)->prev = next;
	(*stack)->next = next->next;
	next->next->prev = *stack;
	next->next = *stack;
	*stack = next;
}
