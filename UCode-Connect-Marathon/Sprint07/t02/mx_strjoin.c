#include <stdio.h> 
#include <stdlib.h> 
 
char *mx_strdup(const char *str); 
int mx_strlen(const char *s); 
char *mx_strnew(const int size); 
char *mx_strcpy(char *dst, const char *src); 
char *mx_strcat(char *s1, const char *s2); 
char *mx_strjoin(char const *s1, char const *s2); 
 
char *mx_strjoin(char const *s1, char const *s2) { 
    if (s1 == NULL && s2 != NULL) 
        return mx_strdup(s2); 
    else if (s1 != NULL && s2 == NULL) 
        return mx_strdup(s1); 
    else if (s1 == NULL && s2 == NULL) 
        return NULL; 
 
    int len1 = mx_strlen(s1); 
    int len2 = mx_strlen(s2); 
 
    char *result = mx_strnew(len1 + len2); 
    if (result == NULL) 
        return NULL; 
 
    mx_strcpy(result, s1); 
    mx_strcat(result, s2); 
 
    return result; 
}
