#include <time.h> 
#include <stdio.h> 
 
double mx_timer(void (*f)()) { 
    clock_t start, end; 
    double cpu_time_used; 
 
    start = clock(); 
    (*f)(); 
    end = clock(); 
 
    if (start == (clock_t)-1 || end == (clock_t)-1) { 
        return -1.0; 
    } 
 
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; 
    return cpu_time_used; 
}
