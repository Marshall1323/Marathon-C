#include <stdlib.h> 
#include <stdio.h> 

int mx_count_words(const char *str, char c); 
char *mx_strncpy(char *dst, const char *src, int len); 
char *mx_strnew(const int size); 
void mx_strdel(char **str); 
 
char **mx_strsplit(const char *s, char c) { 
    if (s == NULL) 
        return NULL; 
 
    int words_count = mx_count_words(s, c); 
    char **result = (char **)malloc((words_count + 1) * sizeof(char *)); 
    if (result == NULL) 
        return NULL; 
 
    int start = 0; 
    int end = 0; 
    int word_index = 0; 
 
    while (s[end] != '\0') { 
        while (s[start] == c) 
            start++; 
         
        end = start; 
        while (s[end] != c && s[end] != '\0') 
            end++; 
 
        int word_length = end - start; 
        result[word_index] = mx_strnew(word_length); 
        if (result[word_index] == NULL) { 
            for (int i = 0; i < word_index; i++) 
                mx_strdel(&result[i]); 
            free(result); 
            return NULL; 
        } 
        mx_strncpy(result[word_index], s + start, word_length); 
        start = end; 
        word_index++; 
    } 
 
    result[word_index] = NULL; 
    return result; 
}

