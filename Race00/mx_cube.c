#include <stdio.h>
void mx_printchar(char c);

static void mx_printline(int len, char ch1, char ch2) {
    mx_printchar(ch1);
    for (int i = 0; i < len; i++) {
        mx_printchar(ch2);
    }
    mx_printchar(ch1);
}

static void mx_space(int len) {
    for (int i = 0; i < len; i++) {
        mx_printchar(' ');
    }
}

void mx_cube(int n) {
    if (n <= 1) return;
    int numberofcolumn = 0;
    mx_space(n / 2 + 1);
    mx_printline(n*2,'+','-');
    mx_printchar('\n');

    for (int i = 0; i < n/2;i++) {
        mx_space(n / 2 - i);
        mx_printline(n*2, '/', ' ');
        mx_space(i);
        mx_printchar('|');
        numberofcolumn++;
        mx_printchar('\n');
    }
    mx_printline(n * 2, '+', '-');
    mx_space(n / 2);
    mx_printchar('|');
    numberofcolumn++;
    mx_printchar('\n');
    for (int i = numberofcolumn; i < n; i++) {
        mx_printline(n * 2, '|', ' ');
        mx_space(n / 2);
        mx_printchar('|');
        numberofcolumn++;
        mx_printchar('\n');
    }
    mx_printline(n * 2, '|', ' ');
    mx_space(n / 2);
    mx_printchar('+');
    mx_printchar('\n');
    for (int i = 0; i < n / 2; i++) {
        mx_printline(n * 2, '|', ' ');
        mx_space(n / 2 - i - 1);
        mx_printchar('/');
        mx_printchar('\n');
    }
    mx_printline(n * 2, '+', '-');
    mx_printchar('\n');
}









