#include <stdlib.h> 
#include <stdio.h> 
 
char *mx_strnew(const int size); 
int mx_strlen(const char *s); 
char *mx_strcpy(char *dst, const char *src); 
 
char *mx_strdup(const char *str) { 
    if (str == NULL) 
        return NULL; 
 
    int len = mx_strlen(str); 
 
    char *duplicate = mx_strnew(len); 
    if (duplicate == NULL) 
        return NULL; 
 
    mx_strcpy(duplicate, str); 
 
    return duplicate; 
} 
 
