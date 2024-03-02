#include "minilibmx.h"

char *mx_strdup(const char *str){
    int size = mx_strlen(str);
    char *r = mx_strnew(size);
    mx_strcpy(r, str);
    return r;
}
