all: copy MINILIBMX

copy:
	mkdir -p obj
	cp inc/*.h obj/
	cp src/*.c obj/

MINILIBMX: object.o

object.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o calc obj/*.c
	rm -rf obj

uninstall:
	rm -rf obj
	rm calc

clean:
	rm -rf src
	rm -rf inc
	rm -rf obj

reinstall:
	make uninstall
	make
