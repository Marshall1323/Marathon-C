#include <stdbool.h>

void mx_printchar(char c);
bool mx_isdigit(int c);
bool mx_isspace(int c);
int mx_atoi(const char *str);
void mx_printint(int n);

int main(int argc, char *argv[]){
	int sum = 0;
	for(int i = 1; i < argc; i++)
		sum += mx_atoi(argv[i]);
	mx_printint(sum);
	mx_printchar('\n');
	return 0;
}
