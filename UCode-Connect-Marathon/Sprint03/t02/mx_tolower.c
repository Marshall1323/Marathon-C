void mx_tolower(char *c) {
    if (*c >= 'A' && *c <= 'Z') {
        *c = *c + 32;
    }
}
