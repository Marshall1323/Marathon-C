#include <stddef.h>
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub);
int mx_count_substr(const char *str, const char *sub) {
    if (*sub == '\0') {
        return 0;  
    }

    int count = 0;
    int sub_len = mx_strlen(sub);

    char *found = mx_strstr(str, sub);

    while (found != NULL) {
        count++;
        found = mx_strstr(found + sub_len, sub);
    }

    return count;
}
