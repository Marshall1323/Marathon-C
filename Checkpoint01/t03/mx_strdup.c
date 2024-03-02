#include <stdlib.h>
#include <stddef.h>

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

char *mx_strcpy(char *dst, const char *src){
	char *save = dst;
	for (; (*dst = *src) != '\0'; ++src, ++dst);
	return(save);
}

int mx_strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char *mx_strnew(const int size){
    if(size < 0)
        return NULL;
    char *r = (char *)malloc(sizeof(char) * size + 1);
    for(int i = 0; i < size + 1; i++)
        r[i] = '\0';
    return r;
}
