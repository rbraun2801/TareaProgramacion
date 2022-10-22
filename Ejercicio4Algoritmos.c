#include <stdio.h>

int main(){
    int edad;
    printf("Por Favor indique su edad\n");
    scanf("%d", &edad);
    if(edad>=70){
        printf("Requiere vacuna tipo C");
    }else if (edad>16 && edad<=69){
        printf("Requiere vacuna tipo B");
    }else if (edad<=16){
        printf("Requiere vacuna tipo A");
    }
}