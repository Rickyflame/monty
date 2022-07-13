#include "monty.h"

/**
 * m_pint - prints the value at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of current operation
 * Return: void has no return value
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pint, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
