#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);  
    write(1, "\n", 1);
}