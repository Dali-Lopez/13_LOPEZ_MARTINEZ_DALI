/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 12/04/2018                             */
/* Descripcion: Indica cuantas veces se repite un numero           */
/* 				            		                               */
/*_________________________________________________________________*/

/* Biblioteca principal de entrada y salida */
#include <stdio.h>
/* Funcion principal */
int main(void)
{ 
	int vector[10]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, cont = 0; /* Declaracion de variables */
	for (int i = 0; i < 10; ++i) /* Ciclo for para imprimir los numeros del arreglo */
	{
		printf(" %d ", i );/* Imprime los datos en pantalla */

	}
		for (int i = 0; i < 9; ++i)/* Ciclo for del 0 al 9, toma el primer valor y lo compara con los va */
		{
			cont = 0;/* Vuelve a iniciar el contador en 0 */
			for (int j = 0; j < 9; ++j)/* Ciclo para comparar el valor i con los del arreglo */
			{
				if ( vector[i] == vector[j])/* Si es igual i a j se aumenta en 1 el contador */
				{
					cont++;
				}
			}
			printf("\nEl numero %d se repite en el arreglo %d vez\n", vector[i], cont );/* Imprime los datos en pantalla */
		}
}