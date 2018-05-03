/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Indica si el numero es primo o no                  */
/* 				            		                               */
/*_________________________________________________________________*/

/*Declaracion de la biblioteca principal*/
#include <stdio.h>
/* Funcion principal */
int main()
{
	int contador, numeroprimo, variable, variable2 = 0; /*Declaracion multiple de variables */
	printf ("Ingrese el numero : ");
	scanf ("%d", &numeroprimo); /*Lee el numero*/
		for (int i =1; i <= numeroprimo; i++) /* Un ciclo para hacer las diviciones del numero ingresado*/
		{
		
			if ( numeroprimo%i == 0 ) /* Se divide el numero ingresado con los numeros menores a el*/
			{
				variable ++;          /* En caso de que el residuo de la divicion sea 0 se incrementa la variable */
			}
			
		}
	
	if (variable == 2) /*Un numero primo solo tiene 2 divisores el 1 y si mismo, se la variable es igual a 2 entoces es un numero primo*/
		{
			printf ("Es un numero primo\n"); /*Imprime las respuestas en pantalla */
		} else 
			{

			printf ("No es un numero primo\n");

		        }
	
}
