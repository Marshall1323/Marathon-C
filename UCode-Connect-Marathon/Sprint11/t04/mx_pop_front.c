#include "list.h" 
#include <stdlib.h> 
#include <stdio.h>
 
void mx_pop_front(t_list **list) { 
    if (list == NULL || *list == NULL) 
        return; 
 
    t_list *temp = *list; 
    *list = (*list)->next; 
    free(temp); 
}

