#include "list.h"
#include <stdlib.h>


void mx_push_front(t_list **list, void *data) {
    if (list == NULL)
        return;

    t_list *node = mx_create_node(data);
    if (node == NULL)
        return;

    node->next = *list;
    *list = node;
}
