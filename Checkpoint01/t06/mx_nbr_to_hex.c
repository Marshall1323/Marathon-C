#include <stdlib.h> 

char *mx_nbr_to_hex(unsigned long nbr); 
char *mx_nbr_to_hex(unsigned long nbr) { 
    char *hex_str = (char *)malloc(sizeof(char) * 17); 
    int remainder; 
    int i = 0; 

    if (nbr == 0) { 
        hex_str[0] = '0'; 
        hex_str[1] = '\0'; 
        return hex_str; 
    } 
 
    while (nbr != 0) { 
        remainder = nbr % 16; 
 
        if (remainder < 10) { 
            hex_str[i] = remainder + '0'; 
        } else { 
            hex_str[i] = remainder + 87; 
        } 
 
        nbr /= 16; 
        i++; 
    } 
 
    hex_str[i] = '\0'; 

    int len = i; 
    for (int j = 0; j < len / 2; j++) { 
        char temp = hex_str[j]; 
        hex_str[j] = hex_str[len - j - 1]; 
        hex_str[len - j - 1] = temp; 
    } 
 
    return hex_str; 
}

