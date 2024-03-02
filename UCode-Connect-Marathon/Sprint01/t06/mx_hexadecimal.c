#include "mx_printchar.c"

void mx_printchar(char c);

void mx_hexadecimal(void) {
    char hexDigits[] = "0123456789ABCDEF";
    int i;

    for (i = 0; i < 16; i++) {
        mx_printchar(hexDigits[i]);
    }

    mx_printchar('\n');
}


