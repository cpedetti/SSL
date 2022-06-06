1. Preprocesador
b: gcc hello2.c -E -o hello2.i
el procesador quita los comentarios y crea un mensaje. En esta etapa se procesando los archivos fuentes, los ficheros como stdio.h, tambien procesa los archivos macros

d: la primera linea de hello3.c define a printf como un entero que recibe una constante restringida del puntero char (un caracter)
e: gcc hello3.c -E -o hello3.i
    el archivo .i crea algunos comnetarios como el nombre del .c del que fue creado

2. Compilacion
a: gcc -S hello3.i
b: gcc hello4.c -E -o hello4.i
    gcc -S hello4.i
c: el lenguaje ensamblador es un lenguaje de bajo nivel y es la representacion mas directa del codigo maquina que una persona pueda entender
d: as -o hello4.o hello4.s -Wall