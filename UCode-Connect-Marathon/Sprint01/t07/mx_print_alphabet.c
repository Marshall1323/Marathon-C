#include "mx_printchar.c"

void mx_printchar(char);
void mx_print_alphabet(void);

void mx_print_alphabet(void) {
    for (char c = 'A'; c <= 'Z'; c++) {
        mx_printchar(c);
    }

    for (char c = 'a'; c <= 'z'; c++) {
        mx_printchar(c);
    }

    mx_printchar('\n');
}