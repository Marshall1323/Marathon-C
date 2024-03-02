#include <stdbool.h>
#include <stddef.h>

int mx_strlen(const char *s);
void mx_strdel(char **str);
bool mx_isspace(int c);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char *str);
char *mx_strtrim(const char *str){
	if(str == NULL)
		return NULL;
	char *t = (char *)str;
	int end = -1;
	while(mx_isspace(*t))
		t++;
	for(int i = mx_strlen(t)-1; i >= 0 && mx_isspace(t[i]); i--)
		end = i;
	char *s = mx_strnew(end);
	mx_strncpy(s, t, end);
	return s;
}
