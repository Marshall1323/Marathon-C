#include <stdlib.h>
#include <stddef.h>

int mx_strlen(const char *s);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);

char *mx_concat_words(char **words);
char *mx_concat_words(char **words){
	if(words == NULL)
		return NULL;
	if(*words == NULL)
		return NULL;
	int size = 0;
	for(int i = 0; words[i] != NULL; i++){
		if(i != 0)
			size++;
		size += mx_strlen(words[i]);
	}
	char *s = mx_strnew(size);
	for(int i = 0; words[i] != NULL; i++){
		mx_strcat(s, mx_strdup(words[i]));
		mx_strcat(s, " ");
	}
	return s;
}
