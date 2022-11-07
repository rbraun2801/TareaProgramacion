#include <stdio.h>
int main()
{
    int edad, cont=0, acum=0;
    float prom;
    for (cont;cont<10;cont++){
        printf("Por favor ingrese una edad\n");
        scanf("%d",&edad);
        acum=acum+edad;
    }
     prom=acum/10;
     printf("%f", prom);
    if (prom<18)
    {
        printf("Mayoría de jóvenes");
    }
    
    
    return 0;
}
