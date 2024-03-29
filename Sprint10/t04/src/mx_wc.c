#include "header.h" 
#include <fcntl.h> 
#include <unistd.h> 
#include <stdbool.h> 
 
void p_count(int *count, int v_p_count) { 
    for (int i = 0; i < 3; i++) { 
        mx_printchar('\t'); 
        mx_printint(count[i]); 
    } 
    if (v_p_count == 1) 
        mx_printchar('\n'); 
    else 
        mx_printchar('\t'); 
} 
 
void p_error(char *argv, int fd, int version) { 
    if (version == 1) { 
        fd = open(argv, O_RDONLY | O_DIRECTORY ); 
        if (fd > 0) { 
            mx_printerr("mx_wc: "); 
            mx_printerr(argv); 
            mx_printerr(": read: Is a directory\n"); 
            close(fd); 
            exit(0); 
        } 
    } 
    if (version == 2) { 
        if (fd == -1) { 
            mx_printerr("mx_wc: "); 
            mx_printerr(argv); 
            mx_printerr(": open: No such file or directory\n"); 
            exit(0); 
        } 
    } 
} 
 
void counter_loop(int *count, int fd, char *argv) { 
    char ch; 
    char *mass_str = NULL; 
    while (read(fd, &ch, 1)) { 
        count[2]++; 
        if (ch == '\n') 
            count[0]++; 
    } 
    mass_str = mx_file_to_str(argv); 
    for (int j = 0; mass_str[j] != '\0'; j++) { 
        if (mx_isspace(mass_str[j])) 
            mass_str[j] = ' '; 
    } 
    count[1] = mx_count_words(mass_str, ' '); 
} 
 
int *wc_function(int argc, char *argv[], int *total) { 
    int count[3] = {0, 0, 0}; 
    int fd; 
    for (int i = 1; i < argc; i++) { 
        count[0] = 0; 
        count[1] = 0; 
        count[2] = 0; 
        p_error(argv[i], fd, 1); 
        fd = open(argv[i], O_RDONLY); 
        p_error(argv[i], fd, 2); 
        counter_loop(count, fd, argv[i]); 
        p_count(count, 2); 
        mx_printstr(argv[i]); 
        mx_printchar('\n'); 
        total[0] += count[0]; 
        total[1] += count[1]; 
        total[2] += count[2]; 
        close(fd); 
    } 
    return total; 
} 
 
int main(int argc, char *argv[]) { 
    int count[3]; 
    int total[3] = {0, 0, 0}; 
    char *mass_str = NULL; 
    char buffer[1024]; 
 
    if (argc == 1) { 
        while ((count[2] = read(0, &buffer, sizeof(buffer)))) { 
            buffer[count[2]] = '\0'; 
            mass_str = mx_strjoin(buffer, mass_str); 
            count[0]++; 
            for (int i = 0; mass_str[i] != '\0'; i++) 
                if (mx_isspace(mass_str[i])) 
                    mass_str[i] = ' '; 
            count[1] = mx_count_words(mass_str, ' '); 
        } 
        count[2] = mx_strlen(mass_str); 
        p_count(count, 1); 
    } 
    wc_function(argc, argv, total); 
    if (argc > 2) 
        mx_print_total(total); 
    exit(0); 
}
