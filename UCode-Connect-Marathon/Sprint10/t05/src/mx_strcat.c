#include "minilibmx.h"

char *mx_strcat(char *s1, const char *s2) {
    int l = mx_strlen(s1);
    for(int i = 0; i < mx_strlen(s2); i++)
        s1[l++] = s2[i];
    s1[l] = '\0';
    return s1;
}
