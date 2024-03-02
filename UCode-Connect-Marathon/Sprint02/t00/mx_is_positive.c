#include <unistd.h> 
 
 
void mx_printstr(const char *s); 
 
void mx_is_positive(int n) { 
    if (n > 0) 
        mx_printstr("positive\n"); 
    else if (n < 0) 
        mx_printstr("negative\n"); 
    else 
        mx_printstr("zero\n"); 
} 
 