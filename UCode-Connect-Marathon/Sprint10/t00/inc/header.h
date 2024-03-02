#pragma once

#include <fcntl.h>
#include <unistd.h>

void mx_printerr(const char *s);
void mx_printchar(char c);

typedef void f_read(char ch);
