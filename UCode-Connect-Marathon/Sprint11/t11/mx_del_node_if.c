#include "list.h"
#include <stdlib.h>

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    t_list *current = *list;
    t_list *prev = NULL;

    while (current != NULL) {
        if (cmp(current->data, del_data)) {
            if (prev == NULL) {
                *list = current->next;
                free(current);
                current = *list;
            } else {
                prev->next = current->next;
                free(current);
                current = prev->next;
            }
        } else {
            prev = current;
            current = current->next;
        }
    }
}
