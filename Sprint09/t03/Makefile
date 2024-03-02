all: copy MINILIBMX create_lib

copy:
	mkdir obj
	cp inc/header.h obj/
	cp src/*.c obj/

MINILIBMX: object.o

object.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c

create_lib:
	ar -rc minilibmx.a *.o
	ranlib minilibmx.a
	mv *.o obj/
	rm obj/header.h
	rm -f obj/*.c

clean:
	rm -rf src
	rm -rf inc
	rm -rf obj

uninstall:
	rm -rf obj minilibmx.a

reinstall:
	make uninstall
	make