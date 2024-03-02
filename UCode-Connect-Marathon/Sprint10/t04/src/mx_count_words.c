#include "header.h" 
 
int mx_count_words(const char *str, char delimiter) { 
    int word_count = 0; 
    bool in_word = false; 
 
    while (*str != '\0') { 
        if (*str == delimiter) { 
            in_word = false; 
        } else if (!in_word) { 
            in_word = true; 
            word_count++; 
        } 
        str++; 
    } 
 
    return word_count; 
}
