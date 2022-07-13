#include "monty.h"
#include <ctypes.h>

/**
 * m_pchar - print character from top of stack
 * @stack_t: pointer to top of stack
 * @line_number: number of current operation
 * Return: void has no return value
 */
void m_pchar(stack_t **stack, unsigned int line_number)
{
	int ch;

	if (var.stack_len < 1)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pchar, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	ch = (*stack)->n;
	if (!isascii(ch))
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch);
}
