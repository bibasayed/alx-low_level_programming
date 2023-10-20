#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the top of linked list
 * @h:  pointer to thefirst node
 * @str: new string add to the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;
while (str[len])
len;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = (*head);
(*head) = new_node;
return (*head);
}
