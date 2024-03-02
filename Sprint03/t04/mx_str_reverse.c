#include <stddef.h>

int mx_strlen(const char *s);
void mx_swap_char(char *a, char *b);

void mx_str_reverse(char *s) {
    if (s == NULL) {
        return;
    }

    int length = mx_strlen(s);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        mx_swap_char(&s[start], &s[end]);
        start++;
        end--;
    }
}
