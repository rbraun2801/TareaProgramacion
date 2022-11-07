/*
  Se desea realizar un código en Lenguaje C que permita Clasificar pelotas fe fútbol según su peso. 
  El usuario debe poder ingresar el peso de la pelota en gramos y el programa debe mostrar
   por pantalla a que talle corresponde, según la siguiente tabla:
Peso
Tipo de talle
de 200 a 249 grs
Talle 1 y 2
De 250 a 349 grs
Talle3
De 350 a 399 grs
Talle 4
De 400 a 450 grs
Talle 5
*/
#include <stdio.h>
int main()
{
   int peso;
   printf("Por favor ingrese el peso de la pelota(en gramos) para devolverle el talle\n");
   scanf("%d", &peso);
   if (peso>=200 && peso<=249){
    printf("El talle de la pelota es 1y 2");
   }else if (peso>=250 && peso<=349){
    printf("El talle de la pelota es 3");
   }else if (peso>=350 && peso<=399){
    printf("El talle de la pelota es 4");
   }else if (peso>=400 && peso<=450){
    printf("El talle de la pelota es 5");
   }else{
    printf("El Peso no esta dentro del rango");
   }
   
   
    return 0;
}