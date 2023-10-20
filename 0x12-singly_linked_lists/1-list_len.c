#include <stdlib.h>
#include "lists.h"
/**
 * list_len - derermine numbers of elements in a linked list
 * @h: pointer to first node
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t f = 0;
while (h)
{
f++;
h = h->next;
}
return (f);
}
