#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 *
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *i;
(void)counter;

i = *head;
while (i)
{
if (i->n > 127 || i->n <= 0)
{
break;
}
printf("%c", i->n);
i = i->next;
}
printf("\n");
}
