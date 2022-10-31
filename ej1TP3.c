#include <stdio.h>

int main()
{
    /* codigo */
    int numero1, numero2;
    printf("Por favor ingrese un numero\n");
    scanf("%d",&numero1);
    printf("Ingrese otro numero para ver si es mayor que el primero\n");
    scanf("%d", &numero2);
    if (numero1>numero2){
        printf("El primer numero ingresado es el mayor");
    }else{
        printf("El segundo numero ingresado es el mayor");
    }
    return 0;
}
