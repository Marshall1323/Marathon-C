#include "list.h"
#include <stdlib.h>


void mx_pop_index(t_list **list, int index) {
    if (*list == NULL)
        return;

    if (index <= 0) {
        t_list *temp = (*list)->next;
        free(*list);
        *list = temp;
        return;
    }

    t_list *prev = NULL;
    t_list *current = *list;
    int i = 0;

    while (current != NULL && i < index) {
        prev = current;
        current = current->next;
        i++;
    }

    if (current == NULL)
        return;

    prev->next = current->next;
    free(current);
}
