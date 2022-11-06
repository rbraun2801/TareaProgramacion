#include <stdio.h>
int main()
{
    int nota;
    printf("Por favor ingrese la nota");
    switch (nota)
    {
    case 10:
        printf("EXCELENTE");
        break;
    case 9:
        printf("MUY BIEN");
        break;
    case 8:
        printf("BIEN");
        break;
    case 7:
        printf("SUFICIENTE");
        break;
    
    default:
        printf("INSUFICIENTE");
        break;
    }
    return 0;
}
