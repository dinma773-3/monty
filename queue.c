#include "monty.h"

/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 *
 * Return: no return
 */
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
 */
void addqueue(stack_t **head, int n)
{
stack_t *new, *aux;

aux = *head;
new = malloc(sizeof(stack_t));
if (new == NULL)
{
printf("Error\n");
}
new->n = n;
new->next = NULL;
if (aux)
{
while (aux->next)
aux = aux->next;
}
if (!aux)
{
*head = new;
new->prev = NULL;
}
else
{
aux->next = new;
new->prev = aux;
}
}
