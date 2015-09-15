all: main.o readFileInfo.o list.o
	gcc -o all main.o readFileInfo.o list.o

main.o: main.c
	gcc -c main.c

readFileInfo.o: readFileInfo.c
	gcc -c readFileInfo.c

list.o: list.c
	gcc -c list.c

clean:
	rm -f *.o all
