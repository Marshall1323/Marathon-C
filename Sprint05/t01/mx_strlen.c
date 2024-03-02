int mx_strlen(const char* str);
int mx_strlen(const char* str) {
    int i;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}
