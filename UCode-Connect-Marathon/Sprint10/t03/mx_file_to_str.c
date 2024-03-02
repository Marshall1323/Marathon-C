#include "file_to_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

char *mx_file_to_str(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *buffer = (char *)malloc(file_size + 1);
    if (buffer == NULL) {
        fprintf(stderr, "Error allocating memory: %s\n", strerror(errno));
        fclose(file);
        return NULL;
    }

    if (fread(buffer, 1, file_size, file) != file_size) {
        fprintf(stderr, "Error reading file: %s\n", strerror(errno));
        free(buffer);
        fclose(file);
        return NULL;
    }

    buffer[file_size] = '\0'; 
    fclose(file);
    return buffer;
}
