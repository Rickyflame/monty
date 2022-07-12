#include "monty.h"

/**
 * m_pall - prints all the values on the stack from top
 * @stack: pointer to head of the stack
 * Return: void has no return value
 */
void m_pall(stack_t **stack ,unsigned int line_number)
{
	stack_t *head;
	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}
