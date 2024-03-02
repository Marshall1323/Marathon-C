#include "list.h"
#include <stdlib.h>

void mx_pop_back(t_list **list) {
    if (list == NULL || *list == NULL)
        return;
    
    t_list *current = *list;
    t_list *previous = NULL;

   
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    
    if (previous == NULL) {
        free(*list);
        *list = NULL;
    } else {
        
        previous->next = NULL;
        free(current);
    }
}
