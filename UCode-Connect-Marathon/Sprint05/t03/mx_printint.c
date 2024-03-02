void mx_printchar(char c);

void mx_printint(int n);
void mx_printint(int n) {
    if(n < 0){
        mx_printchar('-');
        n *= -1;
    }
    if(n < 10)
        mx_printchar('0' + n);
    else{
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
