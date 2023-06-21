#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 *          top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 *
 * Return: no return
 */
void f_mod(stack_t **head, unsigned int counter)
{
stack_t *i;
int leng = 0, aux;

i = *head;
while (i)
{
i = i->next;
leng++;
}
if (leng < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = *head;
if (i->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = i->next->n % i->n;
i->next->n = aux;
*head = i->next;
free(i);
}
