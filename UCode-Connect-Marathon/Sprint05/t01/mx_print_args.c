int mx_strlen(const char* str);
void mx_printchar(char c);
void mx_printstr(const char *str);

int main(int argc, char *argv[]){
	for(int i = 1; i < argc; i++){
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}
