#include <unistd.h>

void mx_printchar(char c);

void mx_pyramid(int n) {
    if (n % 2 == 0 && n >= 1) {
        int z = 1, x = 0, c = (n * 2) - 3;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                for (int j = 0; j < ((c / 2) + 1); j++) {
                    mx_printchar(' ');
                }
                mx_printchar('/');
                mx_printchar('\\');
                mx_printchar('\n');
            } 
            else if (i < n / 2) {
                for (int j = ((c / 2) + 1 + 1 - i); j > 1; j--) {
                    mx_printchar(' ');
                }
                mx_printchar('/');
                for (int j = 0; j < z; j++) {
                    mx_printchar(' ');   
                }
                z += 2;
                mx_printchar('\\');
                for (int j = 0; j <= x; j++) {
                    mx_printchar(' ');   
                }
                x++;
                mx_printchar('\\');
                mx_printchar('\n');
            } 
            else if (i >= n / 2 && i != n - 1) {
                for (int j = n - i; j > 1; j--) {
                    mx_printchar(' ');
                }
                mx_printchar('/');
                for (int j = 0; j < z; j++) {
                    mx_printchar(' ');   
                }
                z += 2;
                mx_printchar('\\');
                for (int j = x + 1; j > 1; j--) {
                    mx_printchar(' ');   
                }
                x--;
                mx_printchar('|');
                mx_printchar('\n');
            } 
            else {
                mx_printchar('/');
                for (int j = 0; j < c; j++) {
                    mx_printchar('_');
                }
                mx_printchar('\\');
                mx_printchar('|');
                mx_printchar('\n');
            }
        }
    } 
}

















