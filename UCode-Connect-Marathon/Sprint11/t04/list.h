#ifndef LIST_H 
#define LIST_H 
 
typedef struct s_list { 
    void *data; 
    struct s_list *next; 
}              t_list; 
 
void mx_pop_front(t_list **list); 
 
#endif 
