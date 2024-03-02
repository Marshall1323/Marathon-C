CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -Werror
LANG = clang

PROJ_NAME = mx_cp

.PHONY: all clean uninstall reinstall

all: uninstall $(PROJ_NAME) clean

$(PROJ_NAME):
	mkdir -p ./obj
	mkdir -p ./temp
	cp ./inc/* ./temp/
	cp ./src/* ./temp/
	$(LANG) $(CFLAGS) ./temp/*.c -include ./temp/*.h -c
	rm -rf ./temp
	mv *.o ./obj
	$(LANG) $(CFLAGS) ./obj/* -o $(PROJ_NAME) 
	

uninstall:
	rm -rf ./obj $(PROJ_NAME)

clean:
	rm -rf ./obj

reinstall: uninstall $(PROJ_NAME)