#include "monty.h"

/**
 * m_sub - subtract top element of stack from next element
 * @stack: pointer to head of the stack
 * @line_number: number of current operation
 * Return: void has no return value
 */
void m_sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n -= n;
}
