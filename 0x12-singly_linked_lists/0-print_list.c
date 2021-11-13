#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
*print_list - prints all the elements of a list_t list
*@h: pointer
*Return: the number of nodes
**/
size_t print_list(const list_t *h)
{
int x;
if (h == NULL)
return (0);
for (x = 0; h != NULL; x++)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (x);
}








