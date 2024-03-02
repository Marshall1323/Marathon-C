all: copy MINILIBMX create_lib

copy:
	mkdir obj
	cp inc/header.h obj/
	cp src/mx_printchar.c obj/
	cp src/mx_printint.c obj/
	cp src/mx_printstr.c obj/
	cp src/mx_strcpy.c obj/
	cp src/mx_strlen.c obj/
	cp src/mx_strcmp.c obj/
	cp src/mx_isdigit.c obj/
	cp src/mx_isspace.c obj/
	cp src/mx_atoi.c obj/

MINILIBMX: mx_printchar.o mx_printint.o mx_printstr.o mx_strcpy.o mx_strlen.o mx_strcmp.o mx_isdigit.o mx_isspace.o mx_atoi.o

mx_printchar.o: obj/mx_printchar.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_printchar.c

mx_printint.o: obj/mx_printint.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_printint.c

mx_printstr.o: obj/mx_printstr.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_printstr.c

mx_strcpy.o: obj/mx_strcpy.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_strcpy.c

mx_strlen.o: obj/mx_strlen.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_strlen.c

mx_strcmp.o: obj/mx_strcmp.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_strcmp.c

mx_isdigit.o: obj/mx_isdigit.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_isdigit.c

mx_isspace.o: obj/mx_isspace.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_isspace.c

mx_atoi.o: obj/mx_atoi.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_atoi.c

create_lib:
	ar -rc minilibmx.a mx_printchar.o mx_printint.o mx_printstr.o mx_strcpy.o mx_strlen.o mx_strcmp.o mx_isdigit.o mx_isspace.o mx_atoi.o
	ranlib minilibmx.a
	mv mx_printchar.o mx_printint.o mx_printstr.o mx_strcpy.o mx_strcmp.o mx_strlen.o  mx_isdigit.o mx_isspace.o mx_atoi.o  obj/
	rm obj/header.h
	rm obj/mx_printchar.c obj/mx_printint.c obj/mx_printstr.c obj/mx_strcpy.c obj/mx_strcmp.c obj/mx_strlen.c  obj/mx_isdigit.c obj/mx_isspace.c obj/mx_atoi.c


clean:
	rm -rf src
	rm -rf inc
	rm -rf obj

uninstall:
	rm -rf obj minilibmx.a

reinstall:
	make uninstall
	make