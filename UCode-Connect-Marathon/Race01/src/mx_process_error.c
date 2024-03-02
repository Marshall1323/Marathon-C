#include "header.h" 
#include <unistd.h> 
 
void mx_process_error(int error, char *value) { 
    char *message = NULL; 
    char newline = '\n'; 
 
    switch (error) { 
        case INVALID_OPERAND: 
            message = MX_INVALID_OPERAND_STR; 
            break; 
        case INVALID_OPERATION: 
            message = MX_INVALID_OPERATION_STR; 
            break; 
        case INVALID_RESULT: 
            message = MX_INVALID_RESULT_STR; 
            break; 
    } 
 
    write(STDERR_FILENO, message, mx_strlen(message)); 
    write(STDERR_FILENO, value, mx_strlen(value)); 
    write(STDERR_FILENO, &newline, 1); 
}
