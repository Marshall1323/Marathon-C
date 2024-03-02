#include "minilibmx.h"

char *mx_strcpy(char *dst, const char *src){
	char *save = dst;
	for (; (*dst = *src) != '\0'; ++src, ++dst);
	return(save);
}
