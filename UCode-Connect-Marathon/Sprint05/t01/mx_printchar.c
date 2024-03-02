#include <unistd.h>

void mx_printchar(char c);
void mx_printchar(char c) {
	const char* str = &c;
	write(1, str, 1);
}
