RM = del
BIN = hello8.exe
OBJ = hello8.o studio1.o
CC = gcc
CFLAGS = -std=c18

run: hello8
	./hello8.exe

hello8: hello8.o studio1.o
	$(CC) $(OBJ) -o $(BIN)
	$(RM) hello8.o
	$(RM) studio1.o

hello8.o: hello8.c 
	$(CC) -c hello8.c -o hello8.o $(CFLAGS)

studio1.o: studio1.c 
	$(CC) -c studio1.c -o studio1.o $(CFLAGS)

clean: 
	$(RM) $(OBJ)
	$(RM) $(BIN)