/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Indica al usuario si es o no un numero par o impar */
/* 				            		                               */
/*_________________________________________________________________*/

/* Biblioteca principal de entrada y salida*/
#include <stdio.h>
/*Funcion principal*/
int main(void)
{
	int numero;
	printf("NUMEROS PARES E IMPARESS\n\n");
	printf("Ingrese un numero : ");
	scanf ("%d", &numero );     /* Solicita el numero */
	if ( numero % 2 == 0) /* en los numeros pares el residuo de la divicion es exacto, si el residuo es 0 entoces es par, sino es impar*/
		{
			printf("%d es un numero par \n", numero ); /* Condiciones para los 2 casos distintos */
		} else
		 		{
		 			printf("%d es un numero impar \n", numero );
		 		}
	return 0;
}