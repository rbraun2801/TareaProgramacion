#include <stdio.h>

int main(){

	int km_Recorridos, tipo_Vehiculo, velocidad_Promedio;
	float precio_Combustible, costo_Combustible, consumo_Combustible, tiempo_Estimado;
	printf("Por favor seleccione un tipo de vehiculo\n");
	printf("Para automovil=1\n");
	printf("para camioneta=2\n");
	scanf("%d",&tipo_Vehiculo);
	printf("Por favor ingrese los km a recorrer\n");
	scanf("%d", &km_Recorridos);
	printf("Por favor ingrese el valor del combustible\n");
	scanf("%f", &precio_Combustible);
	printf("Por favor ingrese la velocidad promedio a la que viajara\n");
	scanf("%d", &velocidad_Promedio);
	switch(tipo_Vehiculo){
		case 1:	
			consumo_Combustible= (km_Recorridos/100)*7;
			break;
		case 2: 
			consumo_Combustible=(km_Recorridos/100)*9.5;
			break;
	}
	costo_Combustible=(consumo_Combustible*precio_Combustible);
	tiempo_Estimado=(km_Recorridos/velocidad_Promedio);
	printf("El consumo total de combustible es: %0.2f \n",consumo_Combustible);
	printf("El costo total de combustible es: %0.2f \n", costo_Combustible);
	printf("El tiempo estimado de viajes es: %0.2f \n", tiempo_Estimado);
	return 0;
}