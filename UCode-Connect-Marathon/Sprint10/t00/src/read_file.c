#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void print_usage() {
    mx_printerr("usage: ./read_file [file_path]");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_usage();
        return 1;
    }

    char *file_path = argv[1];
    int fd = open(file_path, O_RDONLY);
    if (fd == -1) {
        mx_printerr("error");
        return 1;
    }

    char buffer[4096];
    ssize_t bytes_read;
    while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0) {
        if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read) {
            mx_printerr("error");
            close(fd);
            return 1;
        }
    }
    
    mx_printchar('\n');

    if (bytes_read == -1) {
        mx_printerr("error");
        
        close(fd);
        return 1;
    }

    close(fd);
    return 0;
}
