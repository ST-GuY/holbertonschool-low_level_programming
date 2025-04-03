#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Calculates the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(const char *str)
{
int len = 0;

while (str[len])
len++;

return (len);
}

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A pointer to the pointer to the first node
 * @str: The string to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)

{
list_t *new_node, *temp;

if (!str)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = _strlen(new_node->str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
