int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

void mx_swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main(int argc, char *argv[]){
	if(argc != 3)
		return 0;
    int a = mx_atoi(argv[1]);
    int b = mx_atoi(argv[2]);
    if(a > 10 || a < 1 || b > 10 || b < 1)
        return 0;
    if(a > b)
		mx_swap(&a, &b);
    for(int i = a; i <= b; i++){
        for(int j = a; j <= b; j++){
            mx_printint(i*j);
			if(j < b)
				mx_printchar('\t');
		}
        mx_printchar('\n');       
    }
    return 0;
}
