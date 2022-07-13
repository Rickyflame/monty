#include "monty.h"

/**
 * m_stack - set the format of the data to stack(LIFO)
 * @stack: pointer to the beginning of the stack
 * @line_number: script line number
 * Return: void has no return value
 */
void m_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var.queue = STACK;
}
