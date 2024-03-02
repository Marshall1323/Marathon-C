#include "../inc/header.h"

int mx_atoi(const char *str){
	bool minus = false;
	int start = 0;
	if(str[0] == '-' || str[0] == '+')
		start = 1;
	if(str[0] == '-')
		minus = true;
	int dec = 1;
	for(int i = start; str[i] != '\0'; i++)
		if(mx_isdigit(str[i]))
			dec *= 10;
		else
			return 0;
	dec /= 10;
	int num = 0;
	for(int i = start; str[i] != '\0'; i++)
		num += dec * (str[i] - '0');
    return num * (minus?-1:1);
}
