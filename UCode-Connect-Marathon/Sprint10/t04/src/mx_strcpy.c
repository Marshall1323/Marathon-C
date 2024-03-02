#include "header.h" 
 
char *mx_strcpy(char *dst, const char *src) { 
    char *saved_dst = dst; 
 
    while (*src) { 
        *dst++ = *src++; 
    } 
    *dst = '\0'; 
 
    return saved_dst; 
}
