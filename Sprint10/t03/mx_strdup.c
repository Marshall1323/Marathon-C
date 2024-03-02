#include <stdlib.h>
#include <string.h>

char *mx_strdup(const char *str) {
    char *dup = (char *)malloc(strlen(str) + 1);
    if (dup != NULL) {
        strcpy(dup, str);
    }
    return dup;
}
