#include<stdio.h>
/*Creo todas laas funciones necesarias*/
/*Funcion que imprime todos los asientos */
int monto_entrada=500; /*variable global*/
void imprimirOcupacion(char filas[4][5]);
/*Funcion que utilizo para pasar la letra de scanf a numero y poder utilizarla en el indice*/
int letraACol(char letra);
/*Funcion de dedicada a contar las ventas o los lugares ocupados*/
int contarVentas(char filas[4][5]);
/*Funcion en la que genero una venta de un lugar*/
int venta(char filas[4][5], char ocupacion);
/*Uso esta funcion para cancelar una entrada*/
void cancela(char filas[4][5], char ocupacion);
/*Funcion que crea el menu y devuelve el valor del mismo para ser analizado*/
int menu();
/*COMIENZA EL MAAIN*/
int main()
{
char filas[4][5]={{'L','L','L','L','L'},{'L','L','L','L','L'},{'L','L','L','L','L'},{'L','L','L','L','L'}};
int ventas,opcion, monto_a_pagar;
char ocupacion;
printf("Bienvenido al Sistema para cines del ITS\n");
do{ /*Utilizo el do while para que ingrese al menos una vez*/
    /* Creo el Menu */
    opcion=menu();
    switch (opcion){
        case 1:
            /*Utilizo la funcion antes mencionada venta y paso el parametro O de ocupado junto a la matriz*/
            ocupacion='O';
            monto_a_pagar=monto_entrada*venta(filas,ocupacion);
            printf("El Monto a pagar es: $%d\n",monto_a_pagar);
            printf("La Compra fue realizada con exito\n");
            break;
        case 2:
            /*Utilizo la funcion antes mencionada venta y paso el parametro L de Libre junto a la matriz*/
            ocupacion='L';
            cancela(filas,ocupacion);
            break;
        case 3:
            /*Utilizo la funcion para mostrar todas las butacas*/
            imprimirOcupacion(filas);
            break;
        case 4:
            /*Utilizo la funcion para contar la cantidad de asientos vendidos luego los multiplico por el costo de la entrada*/
            ventas=contarVentas(filas)*monto_entrada;
            printf("La cantidad de entradas vendidas hasta el momento es: %d\n", contarVentas(filas));
            printf("La cantidad recaudada hasta este momento es $ %d\n",ventas);
            break;
    }
}while(opcion!=5);/*La unica manera de salir es utilizando el 5*/
return 0; 
}
void imprimirOcupacion(char filas[4][5]){
    int i, j;
    printf("  A B C D E\n");
    for(i=0;i<4;i++){ /*Recorro el primer indice*/
        printf("%d ",i+1);
        for(j=0; j<5;j++){ /*Recorro el segundo*/
            printf("%c ", filas[i][j]); /*Imprimo el contenido de Filas en las posiciones de i y j*/
        }
        printf("\n");
    }
}
int letraACol(char letra){
    int col;
    switch (letra){
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
int venta(char filas[4][5], char ocupacion){
    int n_entradas,fila, col;
    char letra;
    float monto_a_pagar;
    printf("Cuantas entradas desea comprar?");
    scanf("%d", &n_entradas);
    for(int i=0;i<n_entradas;i++){
        imprimirOcupacion(filas);
        printf("Por favor ingrese letra y fila: ");
        scanf(" %c %d",&letra,&fila);
        col=letraACol(letra);
        if (filas[fila-1][col]=='O'){
            printf("El asiento se encuentra ocupado\n");
            venta(filas,ocupacion);
        }else{
        filas[fila-1][col]= ocupacion;
        }
    }
}
void cancela(char filas[4][5], char ocupacion){
    int n_entradas,fila, col;
    char letra;
    if (contarVentas(filas)>0){
        printf("Cuantas entradas desea cancelar?");
        scanf("%d", &n_entradas);
        for(int i=0;i<n_entradas;i++){
            imprimirOcupacion(filas);
            printf("Por favor ingrese letra y fila: ");
            scanf(" %c %d",&letra,&fila);
            col=letraACol(letra);
            if (filas[fila-1][col]=='L'){
            printf("El asiento se encuentra Libre. NO SE PUEDE CANCELAR\n");
            cancela(filas,ocupacion);
            }else{
            filas[fila-1][col]= ocupacion;
            }
        }
    }else{
        printf("NO EXISTEN LOCALIDADES VENDIDAS\n");
    }
}
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