RM = del
BIN = tablaDeConversiones.exe
OBJ = tablaDeConversiones.o Conversion.o
CC = gcc
CFLAGS = -std=c18

run: tablaDeConversiones
	./tablaDeConversiones.exe

tablaDeConversiones: tablaDeConversiones.o Conversion.o
	$(CC) $(OBJ) -o $(BIN)
	$(RM) tablaDeConversiones.o
	$(RM) Conversion.o

tablaDeConversiones.o: tablaDeConversiones.c Conversion.h
	$(CC) -c tablaDeConversiones.c -o tablaDeConversiones.o $(CFLAGS)

Conversion.o: Conversion.h Conversion.c 
	$(CC) -c Conversion.c -o Conversion.o $(CFLAGS)

clean: 
	$(RM) $(OBJ)
	$(RM) $(BIN)