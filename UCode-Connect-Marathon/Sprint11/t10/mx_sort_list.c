#include <stddef.h>
#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    bool swapped = true;
    t_list *ptr;
    t_list *last = NULL;

    if (list == NULL)
        return NULL;

    while (swapped) {
        swapped = false;
        ptr = list;

        while (ptr->next != last) {
            if (cmp(ptr->data, ptr->next->data)) {
                void *temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = true;
            }
            ptr = ptr->next;
        }
        last = ptr;
    }

    return list;
}
