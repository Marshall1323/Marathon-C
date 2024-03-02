#include <stdbool.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(int c);
void mx_printchar(char c);
void mx_printint(int n);

int main (int argc, char * argv[]) {
	if(argc == 0){
		return 0;
	}
    for(int i = 1; i < argc; i++){
		int n = mx_atoi(argv[i]);
		int c, k;
		for (c = 31; c >= 0; c--)
		{
		k = n >> c;

		if (k & 1)
		  mx_printint(1);
		else
		  mx_printint(0);
		}
		mx_printchar('\n');
	}
}
