#include <stdlib.h>

char *mx_strcat(char *s1, const char *s2) {
    char *ptr = s1;
    while (*s1) {
        s1++;
    }
    while (*s2) {
        *s1++ = *s2++;
    }
    *s1 = '\0';
    return ptr;
}
