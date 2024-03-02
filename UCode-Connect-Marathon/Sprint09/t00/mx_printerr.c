#include <unistd.h> 
#include "printerr.h" 
 
void mx_printerr(const char *s) { 
    int len = mx_strlen(s); 
    write(STDERR_FILENO, s, len); 
}
