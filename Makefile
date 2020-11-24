all: hello

test: all
	./hello test args

hello: hello.c
	cc -Wall -Werror $^ -o $@
