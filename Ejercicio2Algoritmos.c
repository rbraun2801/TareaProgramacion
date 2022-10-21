#include <stdio.h>

int main()
{
	/* codigo */
	int numero_Ingresado; /*Creo la variable para el numero */
	printf("INGRESE UN NUMERO PARA COMPROBAR SI ES PAR O IMPAR \n");
	scanf("%d", &numero_Ingresado); /*Solicito la variable*/
	if (numero_Ingresado%2==0){/*compruebo por medio del modulo si el numero es par o impar*/
		printf("EL NUMERO ES PAR");
	}else {
		printf("EL NUMERO ES IMPAR");
	}
	return 0;
}