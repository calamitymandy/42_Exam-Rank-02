#include "list.h"
#include <stdlib.h>
#include <stdio.h>

/*
int ascending(int a, int b)
{
	return (a <= b);
}
*/

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *temp;

    swap = 0;
    temp = lst;
    while (lst->next)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = temp;
        }
        else
            lst = lst->next;
    }
    lst = temp;
    return (lst);
}

int main (void)
{
    t_list  *c = malloc(sizeof(t_list));
    c->next = 0;
    c->data = 45;

    t_list  *b = malloc(sizeof(t_list));
    b->next = c;
    b->data = 73;

    t_list  *a = malloc(sizeof(t_list));
    a->next = b;
    a->data = 108;

    // sort_list(a, ascending);

    while(a)
    {
        printf("%d", a->data);
        if(a->next != 0)
            printf(" ");
        a = a->next;
    }
    printf("\n");
}