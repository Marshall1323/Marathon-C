#include <stdbool.h>

void mx_reverse_case(char *s);

void mx_tolower(char *c);
void mx_toupper(char *c);
bool mx_islower(char c);
bool mx_isupper(char c);

void mx_reverse_case(char *s) {

	while (*s != '\0') {
        if (mx_islower(*s)) {
            mx_toupper(s);
        } else if (mx_isupper(*s)) {
            mx_tolower(s);
        }
        s++;
    }
}

