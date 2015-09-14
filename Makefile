all: main.o
	gcc -o all main.o

main.o: main.c readFileInfo.c
	gcc -c main.c

readFileInfo.o: readFileInfo.c
	gcc -c readFileInfo.c

clean:
	rm -f *.o all
