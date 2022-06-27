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

3. Vinculación
a: gcc hello5.c -o hello5.exe

4. Corrección de bugs
a: gcc hello6.c -E -o hello6.i  
    gcc -S hello4.i
    gcc hello6.c -o hello6.exe  

5. Remoción de prototipo
a: gcc hello7.c -o hello7.exe
b: en c si llamas a una funcion sin que esta sea declarada estas creando una declaracion implicita que devuelve un int, pero las funciones mas usadas como printf, scanf y puts estan declaradas en Standard C library y gcc la importa de forma implicita

6. Compilación Separada: Contratos y Módulos
b: cree un make file y lo corri con el comando make, aunque stucio1.c tenga la declaracion de prontf hello8 tira un warning porque no se esta declarando stucio1.c en hello8.c
c: va a tener comportamiento definido, no se puede probar