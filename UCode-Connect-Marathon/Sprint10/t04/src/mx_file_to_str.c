#include "header.h" 
 
char *mx_file_to_str(const char *filename) { 
    int fd = open(filename, O_RDONLY); 
    if (fd == -1) { 
        mx_printerr("mx_wc: "); 
        mx_printerr(filename); 
        mx_printerr(": open: No such file or directory\n"); 
        return NULL; 
    } 
 
    struct stat st; 
    if (fstat(fd, &st) == -1) { 
        mx_printerr("mx_wc: "); 
        mx_printerr(filename); 
        mx_printerr(": stat: No such file or directory\n"); 
        close(fd); 
        return NULL; 
    } 
 
   
    char *content = mx_strnew(st.st_size + 1); 
    if (!content) { 
        mx_printerr("mx_wc: "); 
        mx_printerr(filename); 
        mx_printerr(": memory allocation failed\n"); 
        close(fd); 
        return NULL; 
    } 
 
    ssize_t bytes_read = read(fd, content, st.st_size); 
    if (bytes_read == -1) { 
        mx_printerr("mx_wc: "); 
        mx_printerr(filename); 
        mx_printerr(": read error\n"); 
        close(fd); 
        free(content); 
        return NULL; 
    } 
 
    
    content[bytes_read] = '\0'; 
 
    close(fd); 
    return content; 
}



