#include <stdio.h>

int main(){

    int puntuacion;
    printf("Por favor ingrese una puntuacion (1-10) \n");
    scanf("%d",&puntuacion);
    if(puntuacion==10){
        printf("La puntuacion es excelente \n");
    }else if (puntuacion==9) {
        printf("La puntuacion es muy bien \n");
    }else if (puntuacion==8) {
        printf("La puntuacion es bien \n");
    }else if (puntuacion==7) {
        printf("La puntuacion es suficiente \n");
    }else if (puntuacion>=6) {
        printf("La puntuacion es insuficiente \n");
    }
    return 0;

}