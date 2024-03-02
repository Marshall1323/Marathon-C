#include "list.h" 
 
void mx_push_index(t_list **list, void *data, int index) { 
    if (index <= 0) { 
        mx_push_front(list, data); 
    } else { 
        t_list *node = mx_create_node(data); 
        if (node) { 
            t_list *current = *list; 
            int i = 0; 
            while (current != NULL && i < index - 1) { 
                current = current->next; 
                i++; 
            } 
            if (current == NULL) { 
                mx_push_back(list, data); 
            } else { 
                node->next = current->next; 
                current->next = node; 
            } 
        } 
    } 
}
