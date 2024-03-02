int mx_count_words(const char *str, char delimiter);
int mx_count_words(const char *str, char delimiter) {
	int count = 0;
	char preWord = 0;
	char add = 1;
	for(int i = 0; str[i] != '\0'; i++)
		if(str[i] == delimiter){
			if(preWord == 1){
				preWord = 0;
				add = 1;
			}
		}
		else{
		    if(add){
		        count++;
		        add = 0;
		    }
			preWord = 1;
		}
	return count;
}
