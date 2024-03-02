#include "list.h"
#include <stdlib.h>

void mx_pop_front(t_list **list) {
    if (*list == NULL) 
        return;

t_list *temp = (*list)->next;
    free(*list);
    *list = temp;
}
