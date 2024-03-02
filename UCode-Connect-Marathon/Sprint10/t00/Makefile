CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -Werror
LANG = gcc

PROJ_NAME = read_file

.PHONY: all clean uninstall reinstall

all: uninstall $(PROJ_NAME) clean

$(PROJ_NAME):
	mkdir -p ./obj
	$(LANG) $(CFLAGS) -c ./src/*.c -I./inc
	mv *.o ./obj
	$(LANG) $(CFLAGS) ./obj/*.o -o $(PROJ_NAME)

uninstall:
	rm -rf ./obj $(PROJ_NAME)

clean:
	rm -rf ./obj

reinstall: uninstall $(PROJ_NAME)
