#include "header.h"

void mx_write_file(char *path, char *data){
	int fd = open(path, O_CREAT | O_RDWR);
	write(fd, data, mx_strlen(data));
    close(fd);
}
