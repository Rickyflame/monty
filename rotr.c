#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the beginning of the list
 * @line_number: script line number
 * Return: void has no return value
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->prev;
}
