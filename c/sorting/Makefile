objects = main.o tools.o
flag = -g -Wall
cc = clang
VPATH = lib

test: $(objects)
	$(cc) $(flag) -o test $(objects)

main.o: main.c
tools.o: tools.h

.PHONY: clean
clean:
	rm $(objects)
