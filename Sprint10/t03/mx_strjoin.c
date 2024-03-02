#include <stdlib.h>
#include <string.h>

char *mx_strjoin(const char *s1, const char *s2) {
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }

    int len1 = (s1 != NULL) ? strlen(s1) : 0;
    int len2 = (s2 != NULL) ? strlen(s2) : 0;

    char *result = (char *)malloc(len1 + len2 + 1);
    if (result == NULL) {
        return NULL;
    }

    if (s1 != NULL) {
        strcpy(result, s1);
    }
    if (s2 != NULL) {
        strcpy(result + len1, s2);
    }

    return result;
}
