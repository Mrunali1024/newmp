try: main.o mini.o
	cc main.o mini.o -o try
main.o: main.c mini.h
	cc -Wall -c main.c
mini.o: mini.c mini.h
	cc -Wall -c mini.c



