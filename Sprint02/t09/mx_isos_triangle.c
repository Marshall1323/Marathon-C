

void mx_printchar(char c); 

void mx_isos_triangle(unsigned int length, char fill_char) {
    for (unsigned int i = 1; i <= length; i++) {
        for (unsigned int j = 1; j <= i; j++) {
            mx_printchar(fill_char);
        }
        mx_printchar('\n');
    }
}

