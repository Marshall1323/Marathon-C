#include "minilibmx.h"

char *mx_strjoin(char const *s1, char const *s2){
    if(s1 == NULL || s2 == NULL)
        return (s1 == NULL && s2 == NULL)?NULL:((s1 == NULL)?mx_strdup(s2):mx_strdup(s1));
    return mx_strcat(mx_strdup(s1), s2);
}
