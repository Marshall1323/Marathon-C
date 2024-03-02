char *mx_strncpy(char *dst, const char *src, int len) { 
    char *original_dst = dst; 
 
    while (len-- > 0 && *src != '\0') { 
        *dst++ = *src++; 
    } 
 
    *dst = '\0'; 
 
    return original_dst; 
}
