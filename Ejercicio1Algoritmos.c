#include <stdio.h>

int main()
{
	/* codigo */
	int nota; /*Creo la variable*/
	scanf("%d",&nota); /*Solicito la variable*/
	
	if(nota>=6){ /*Compruebo si la nota es mayor o igual a 6 */
		printf("APROBADO");
	}else{
		printf("DESAPROBADO");
	}
	return 0;
}