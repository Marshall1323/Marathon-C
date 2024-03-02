#include "header.h" 
 
char *mx_strjoin(const char *s1, const char *s2) { 
    if (s1 == NULL && s2 == NULL) 
        return NULL; 
    else if (s1 == NULL) 
        return mx_strdup(s2); 
    else if (s2 == NULL) 
        return mx_strdup(s1); 
 
    int len_s1 = mx_strlen(s1); 
    int len_s2 = mx_strlen(s2); 
    char *result = mx_strnew(len_s1 + len_s2); 
 
    if (result == NULL) 
        return NULL; 
 
    mx_strcpy(result, s1); 
    mx_strcpy(result + len_s1, s2); 
 
    return result; 
}
