#include <stdio.h>
int main()
{
    /* codigo */
    int altura, alturaMayor=0;
    for (size_t i = 0; i < 7; i++)
    {
        printf("Por favor ingrese una altura");
        scanf("%d", &altura);
        if (altura>alturaMayor)
        {
            alturaMayor=altura;
        }
    }
    printf("La mayor altura ingresada es %d", alturaMayor);
    
    return 0;
}
