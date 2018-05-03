/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 12/04/2018                             */
/* Descripcion: Tablas de multiplicar                              */
/* 				            		                               */
/*_________________________________________________________________*/


/*Declaracion de biblioteca estandar*/
#include <stdio.h>
/*funcion principal*/
int main()
{
	int var, numero; /*declaracion de variables multiples*/
	puts("Tabla de multiplicar de los primeros 10 multiplos de un numero n \n");
	printf("Ingrese el numero de la tabla de multiplicar que desea : ");
	scanf("%d", &numero);
	for (int i = 1; i <= 10; ++i) /* ciclo for para poder multiplicar en orden los primeros 10 numeros*/
	{
		var = i * numero;  /*operacionn realizada para la tabla de multiplicar*/
		printf("%d x %d = %d\n",numero, i, var ); /* imprime en pantalla el resultado*/
	}
	return 0;
}