#include <stdio.h>

int main()
{
    /* codigo */
    int numero1, numero2, numero3;
    printf("Ingrese tres numeros\n");
    scanf("%d\n %d\n %d\n",&numero1,&numero2,&numero3);
    if (numero1<0 || numero2<0 || numero3<0)
    {
        printf("Al menos uno de los numeros ingresados en negativo\n");
    }
    
    return 0;
}
