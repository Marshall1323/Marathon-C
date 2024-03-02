#include <stddef.h>

int mx_strlen(const char *s) {
    if (s == NULL) {
        return 0;
    }

    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }

    return len;
}
