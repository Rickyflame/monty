#include "monty.h"
#include <ctypes.h>

/**
 * m_pstr - print string from stack of integers from
 * non_ascii characters or end of stack
 * @stack: pointer to head of stack
 * @line:number: number of current operation
 * Return: void has no return value
 */
void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int ch;

	(void)line_number;
	temp = *stack;
	while (temp!= NULL)
	{
		ch = temp->n;
		if(!isascii(ch) || ch == 0)
			break;
		putchar(ch);
		temp = temp->next;
		if (temp == *stack)
			break;
	}
	putchar('\n');
}
