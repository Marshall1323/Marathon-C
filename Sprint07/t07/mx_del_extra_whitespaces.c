#include <stddef.h>
#include <stdbool.h>

int mx_strlen(const char *s);
void mx_strdel(char **str);
bool mx_isspace(int c);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str);
char *mx_del_extra_whitespaces(const char *str){
	if(str == NULL)
		return NULL;
	char *trim = mx_strtrim(str);
	if(trim == NULL)
		return NULL;
	char *result = mx_strnew(mx_strlen(trim));
	char *temp = result;
	bool first = true;
	for(char *i = trim; *i != '\0'; i++)
		if(!mx_isspace(*i)){
			int count = 0;
			for(char *j = i; *j != '\0' && !mx_isspace(*j); j++)
				count++;
			if(first)
				first = false;
			else
				mx_strncpy(temp++, " ", 1);
			mx_strncpy(temp, i, count);
			temp += count;
			i += count;
		}
	char *ret = mx_strncpy(mx_strnew(mx_strlen(result)), result, mx_strlen(result));
	mx_strdel(&trim);
	mx_strdel(&result);
	return ret;
}
