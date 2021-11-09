# targets: pre-reqs
	# actions
# compile the program

default: c-demo.c
	gcc -Wall -o from-makefile c-demo.c

go: from-makefile
	./from-makefile

# cleaning things up
clean: from-makefile
	rm from-makefile
