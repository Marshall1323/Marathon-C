int mx_gcd(int a, int b);
int mx_gcd(int a, int b){
	if(a < 0)
		a *= -1;
	if(b < 0)
		b *= -1;
	return (a == 0) ? b : mx_gcd(b % a, a);
}
