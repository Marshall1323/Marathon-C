#include "header.h"

char **mx_parse_text(char *text){
	int h = 0;
	for(char *i = text; *i != '\0'; i++)
		if(*i == '\n')
			h++;
	char **tsa = malloc(sizeof(char*)*(h+1));
	char *ts = mx_strnew(0);
	int tsai = 0;
	for(char *i = text; *i != '\0'; i++)
		if(*i == '\n'){
			tsa[tsai++] = ts; 
			ts = mx_strnew(0);
		}
		else if(*i == '#' || *i == '.')
			ts = mx_str_append(ts, *i);
	tsa[tsai] = NULL;
	return tsa;
}
