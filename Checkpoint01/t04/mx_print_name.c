#include <unistd.h>

void mx_printint(int n);
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *str);

int main (int argc, char * argv[]) {
	mx_printstr(argv[0]);
	mx_printchar('\n');
	mx_printint(argc);
	mx_printchar('\n');
	return 0;
}

void mx_printstr(const char *str) {
    for(int i = 0; i < mx_strlen(str); i++)
		mx_printchar(str[i]);
}

void mx_printchar(char c)
{
    write(1, &c, 1);
}

int mx_strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

void mx_printint(int n)
{
    if(n < 0){
        mx_printchar('-');
        n *= -1;
    }
    if(n < 10)
        mx_printchar('0' + n);
    else {
        int l = 0;
        int t = n;
		for(;t;t/=10)
			l++;
        int d = 1;
        for(int i = 1; i < l; i++)
			d *= 10;
        mx_printchar('0' + (( n- n % d) / d));
        mx_printint(n % d);
    }   
}
