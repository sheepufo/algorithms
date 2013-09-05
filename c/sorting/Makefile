objects = main.o array_utils.o
flag = -g -Wall
cc = clang
VPATH = lib

test: $(objects)
	$(cc) $(flag) -o test $(objects)

main.o: main.c
array_utils.o: array_utils.h

.PHONY: clean
clean:
	rm $(objects)
