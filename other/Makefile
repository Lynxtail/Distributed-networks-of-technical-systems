all: prog

prog: first.o second.o
	gcc -o prog first.o second.o

first.o: first.c
	gcc -c -o first.o first.c

second.o: second.c
	gcc -c -o second.o second.c

clean:
	rm -rf *.o prog