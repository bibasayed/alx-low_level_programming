#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all the elements of a linked list
 * @h: pointer to first node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
size_t r = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
r++;
}
return (r);
}
