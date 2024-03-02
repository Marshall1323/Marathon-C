#include "header.h"

void mx_printerr_c(char *str){
	write(2, str, mx_strlen(str));
	exit(0);
}
