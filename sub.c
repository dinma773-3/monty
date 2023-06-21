#include "monty.h"

/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *
  *Return: no return
  */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *h;
int sus, node;

h = *head;
for (node = 0; h != NULL; node++)
h = h->next;
if (node < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
sus = h->next->n - h->n;
h->next->n = sus;
*head = h->next;
free(h);
}
