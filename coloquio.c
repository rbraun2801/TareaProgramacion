#include<stdio.h>
void imprimirOcupacion(char filas[4][5]){
    int i, j;
    printf("  A B C D E\n");
    for(i=0;i<4;i++){
        printf("%d ",i+1);
        for(j=0; j<5;j++){
        printf("%c ", filas[i][j]);
        }
        printf("\n");
    }
}
int letraACol(char letra){
    int col;
    switch (letra)
    {
    case 'A':
        col=0;
        break;
    case 'B':
        col=1;
        break;
    case 'C':
        col=2;
        break;
    case 'D':
        col=3;
        break;
    case 'E':
        col=4;
        break;
    }
    return col;
}
int contarVentas(char filas[4][5]){
     int i, j;
     int ventas=0;
    for(i=0;i<4;i++){
        for(j=0; j<5;j++){
            if (filas[i][j]=='O'){
                ventas++;
            }
        }
}
return ventas;
}
void venta(char filas[4][5]){
    int n_entradas;
    printf("Cuantas entradas desea comprar?");
    scanf("%d",&n_entradas);
    int fila, col;
    char letra;
     for(int i=0;i<n_entradas;i++){
        imprimirOcupacion(filas);
        printf("Por favor ingrese letra y fila");
        scanf(" %c %d",&letra,&fila);
        col=letraACol(letra);
        filas[fila-1][col]='O';
        }
};
int menu(){
    int opcionMenu;
    printf("Por Favor Seleccione una opcion del siguiente menu:\n");
    printf("1-Vender Entrada\n");
    printf("2-cancelar una entrada\n");
    printf("3-Imprimir ubicaciones\n");
    printf("4-Calcular Ventas\n");
    printf("5-Salir\n");
    printf("Ingrese Opcion: \n");
    printf("-------------------------\n");
    scanf("%d", &opcionMenu);
    return opcionMenu;
}
int main()
{
char filas[4][5]={{'L','L','L','L','L'},{'L','L','L','L','L'},{'L','L','L','L','L'},{'L','L','L','L','L'}};
int ventas;
printf("Bienvenido al Sistema de Ventas del CINE ITS\n");
int opcion;
do{
    /* Creo el Menu */
    opcion=menu();
    switch (opcion)
    {
    case 1:
        /*Tratar de implementar una funcion para todo esto!*/
        venta(filas);
        break;
    case 2:
        venta(filas);
        break;
    case 3:
        imprimirOcupacion(filas);
        break;
    case 4:
        ventas=contarVentas(filas)*300;
        printf("La cantidad recaudada hasta este momento es $ %d",ventas);
        break;
    }
}while(opcion!=5);
return 0; 
}
