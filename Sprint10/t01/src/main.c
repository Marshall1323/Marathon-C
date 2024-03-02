#include <stdio.h>
#include "header.h" 
 
int main(int argc, char *argv[]) { 
    if (argc != 3) { 
        mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n"); 
        return 1; 
    } 
 
    int source_fd = open(argv[1], O_RDONLY); 
    if (source_fd < 0) { 
        mx_printerr("mx_cp: "); 
        mx_printerr(argv[1]); 
        mx_printerr(": No such file or directory\n"); 
        return 1; 
    } 
 
    int dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR); 
    if (dest_fd < 0) { 
        if (errno == EEXIST) { 
            close(source_fd); 
            return 0;
        } else { 
            mx_printerr("Error creating destination file.\n"); 
            close(source_fd); 
            return 1; 
        } 
    } 
 
    char buf[BUFSIZ]; 
    ssize_t bytes_read; 
 
    while ((bytes_read = read(source_fd, buf, BUFSIZ)) > 0) { 
        ssize_t bytes_written = write(dest_fd, buf, bytes_read); 
        if (bytes_written < 0) { 
            mx_printerr("Error writing to destination file.\n"); 
            close(source_fd); 
            close(dest_fd); 
            return 1; 
        } 
    } 
 
    if (bytes_read < 0) { 
        mx_printerr("Error reading from source file.\n"); 
        close(source_fd); 
        close(dest_fd); 
        return 1; 
    } 
 
    close(source_fd); 
    close(dest_fd); 
 
    return 0; 
}
