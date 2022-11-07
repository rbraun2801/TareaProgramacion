#include <stdio.h>

int main()
{
    int cont=0, num, acum;
    for(cont;cont<5;cont++){
        printf("Ingrese un numero");
        scanf("%d",&num);
        acum=acum+num;
    }
    printf("La cantidad acumulada es %d", num);
    return 0;
}
