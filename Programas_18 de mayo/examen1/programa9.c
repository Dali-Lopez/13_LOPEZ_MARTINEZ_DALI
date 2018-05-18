/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Indica si un numero es par o impar y positivo      */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>/* Biblioteca principal */
#include "funciones.h"/* Biblioteca creada por mi :v */
int main(void)
{
  int numero;/* declaracion de variables */
  printf("INDICA AL USUARIO SI EL NUMERO INGRESADO ES POSITIVO O NEGATIVO Y SI ES PAR O IMPAR \n" );
  printf("Ingrese un numero : " );/* Solicita el dato al usuario */
    scanf("%d", &numero );
  numero_par_o_impar(numero);/* invoca las funciones de paro o impar y la funcion imprime en pantalla los resultados */
  positivo_o_negativo(numero);
  return 0;
}
