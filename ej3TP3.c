#include <stdio.h>
int main()
{
  /*Realizar un algoritmo que le solicite a un usuario los siguientes datos: nombre, apellido y dni. 
  Estos datos deben ser guardados en distintas variables y mostrados si el usuario los solicita.*/

    int dni;
    char respuesta;
    char nombre[15];
    char apellido[15];
    printf("Por favor ingrese su Nombre, apellido y dni\n");
    scanf("%s\n",&nombre);
    scanf("%s\n",&apellido);
    scanf("%d",&dni);
    printf("Desea mostrar sus datos? s/n\n");
    scanf("%s", &respuesta);
    while (respuesta=='s' || respuesta=='S')
    {
        printf("Su nombre completo %s, %s y su DNI es %d \n",nombre,apellido,dni);
        printf("Desea mostrar sus datos nuevamente? s/n \n");
        scanf("%s", &respuesta);
    }
    
    return 0;
}
