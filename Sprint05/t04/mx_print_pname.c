#include <unistd.h>

void mx_printchar(char c);
void mx_printstr(const char *str);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

int main (int argc, char * argv[]) {
	if(argc == 0){
		return 0;
	}
	char *temp = argv[0];
    for(int i = 0; i < mx_strlen(argv[0]); i++){
        if(argv[0][i] == '/'){
            temp = &argv[0][i] + 1;
		}
	}
	mx_printstr(temp);
	mx_printchar('\n');
	return 0;
}
