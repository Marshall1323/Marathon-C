#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(int c);

int mx_atoi(const char *str);
int mx_atoi(const char *str) {
    int result = 0;
    int sign = 1;

   
    while (mx_isspace(*str)) {
        str++;
    }

   
    if (*str == '-' || *str == '+') {
        sign = (*str++ == '-') ? -1 : 1;
    }

    
    while (mx_isdigit(*str)) {
       
        if (result > (INT_MAX - (*str - '0')) / 10) {
            
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + (*str - '0');
        str++;
    }

   
    return result * sign;
}


