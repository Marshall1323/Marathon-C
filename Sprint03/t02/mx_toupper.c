void mx_toupper(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;
    }
}
