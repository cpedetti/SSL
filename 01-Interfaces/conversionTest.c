#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Conversion.h"

int main(void){

   double comparador = 16;
   assert(round(Celsius(60)) == comparador);

   comparador = 60;
   assert(round(Celsius(140)) == comparador);

   comparador = 104;
   assert(round(Celsius(220)) == comparador);

   comparador = 41;
   assert(Farenheit(5) == comparador);

   comparador = 68;
   assert(Farenheit(20) == comparador);

}