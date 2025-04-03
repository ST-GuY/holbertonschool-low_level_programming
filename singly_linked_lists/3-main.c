#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	char *strings[3] = {
		"Best",
		"School",
		NULL
	};
	list_t *ptr;
	int i;
	size_t n;
	head = NULL;
	for (i = 0; strings[i]; ++i)
	{
		ptr = add_node_end(&head, strings[i]);
		if (!ptr || !ptr->str)
		{
			printf("Failed\n");
			free_list(head);
			return (1);
		}
		if (ptr->str == strings[i])
		{
			printf("A copy of the string should be stored\n");
			return (1);
		}
	}
	n = print_list(head);
	printf("-> %lu elements\n", n);
	free_list(head);
	return (0);
}
