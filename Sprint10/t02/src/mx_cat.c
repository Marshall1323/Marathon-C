#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 2){
		mx_printerr("usage: ./mx_cat [source_file]\n");
		return -1;
	}
	int rwd = open(argv[1], O_RDONLY);
	if(rwd < 0){
		mx_printerr("mx_cat: ");
		mx_printerr(argv[1]);
		mx_printerr(": No such file or directory\n");
		return -1;
	}
	char ch;
	while (read(rwd, &ch, 1))
		write(1, &ch, 1);
	close(rwd);
    return 0;
}
