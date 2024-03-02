int mx_factorial_rec(int n);
int mx_factorial_rec(int n){
	if(n < 1)
		return 0;
	if(n == 1)
		return n;
	if(n * n-1 > 2147483647)
		return 0;
	return n * mx_factorial_rec(n - 1);
}
