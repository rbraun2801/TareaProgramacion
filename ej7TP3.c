#include <stdio.h>
int main()
{
    int num;
    printf("Por favor ingrese un numero");
    scanf("%d", num);
    for(num;num>1;num--){
        printf("%d", num);
    }
    return 0;
}
