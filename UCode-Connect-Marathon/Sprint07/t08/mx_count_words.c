int mx_count_words(const char *str, char c) { 
    int count = 0; 
    int in_word = 0; 
 
    while (*str != '\0') { 
        if (*str == c) { 
            in_word = 0; 
        } else if (in_word == 0) { 
            in_word = 1; 
            count++; 
        } 
        str++; 
    } 
 
    return count; 
}
