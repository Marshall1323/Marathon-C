#include <unistd.h>

void mx_printerr(const char *s);
void mx_printerr(const char *s) {
    while (*s != '\0')
        write(STDERR_FILENO, s++, 1);
}
