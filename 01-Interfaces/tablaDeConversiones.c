#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Conversion.h"

int main(void){
   
   const int MINFAHR = 0; 
   const int MAXFAHR = 300; 
   const int STEPFAHR = 20; 
   printf("Grados de Celsius a Farenheit\n");
   for(int fahr = MINFAHR; fahr <= MAXFAHR; fahr = fahr + STEPFAHR)
      printf("%3d %6.1f\n", fahr, Celsius(fahr) );


   const int MINCEL = 0; 
   const int MAXCEL = 75; 
   const int STEPCEL = 5; 
   printf("Grados de Farenheit a Celsius\n");
   for(int cel = MINCEL; cel <= MAXCEL; cel = cel + STEPCEL)
      printf("%3d %6.1f\n", cel, Farenheit(cel) );
}

