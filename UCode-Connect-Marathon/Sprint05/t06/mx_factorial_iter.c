int mx_factorial_iter(int n);
int mx_factorial_iter(int n){
	if(n < 1)
		return 0;
	int r = 1;
	for(int i = 1; i <= n; i++)
		if(r * i > 2147483647)
			return 0;
		else
			r *= i;
	return r;
}
