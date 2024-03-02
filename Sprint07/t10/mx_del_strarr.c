#include <stdlib.h>
#include <stddef.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr);
void mx_del_strarr(char ***arr){
	free(*arr);
	*arr=NULL;
}
