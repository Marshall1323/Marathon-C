int mx_sqrt(int x);
int mx_sqrt(int x) {
    if(x < 0)
        x *= -1;
    
    for(int i = 1; i < x; i++)
        if(i*i == x)
            return i;
    return 0;
}
