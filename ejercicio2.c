#include <stdio.h>

int main(){
    int numero,acum, cont=0;
    while(cont<5){
        printf("Por favor ingrese un numero \n");
        scanf("%d",&numero);
        acum=acum+numero;
        cont++;
    }
    printf("La suma de los numeros ingresados es %d \n", acum);
    return 0;
}