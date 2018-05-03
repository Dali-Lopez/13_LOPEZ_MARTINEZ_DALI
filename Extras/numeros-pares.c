/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 12/04/2018                             */
/* Descripcion: Imprime numeros pares en pantalla                  */
/* 				            		                               */
/*_________________________________________________________________*/

/* Biblioteca principal de entrada y salida*/
#include <stdio.h>
/*Funcion principal*/
int main(void)
{
	int numero, par = 1; /* declaracion de variables */
	printf("NUMEROS PARES\n\n");
	printf("Ingrese la cantidad de los primeros numero pares a mostrar : ");
	scanf ("%d", &numero );

	for (int i = 1; i <= numero; ++i) /* Ciclo for para imprimir en pantalla los numero pares */
	{
	
		par = 2 * i;  /* i es igual a 1, y se multiplica i por 2 para obtener los numeros pares*/

		printf("%d \n", par );
	}	

	return 0;
}