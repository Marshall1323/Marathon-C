char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str);
char *mx_strdup(const char *str){
    int size = mx_strlen(str);
    char *r = mx_strnew(size);
    mx_strcpy(r, str);
    return r;
}
