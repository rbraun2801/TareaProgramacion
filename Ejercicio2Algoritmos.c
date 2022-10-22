#include <stdio.h>

int main()
{
	int contador=0, numero;
	printf("POR FAVOR INGRESE UN NUMERO\n");
	printf("SI INGRESA 9 SALDRA DEL SISTEMA\n");
	scanf("%d",&numero);
	while (numero!=9){
		contador++;
	}
	printf("USTED HA INGRESADO: %d cantidad de numeros", contador);

}