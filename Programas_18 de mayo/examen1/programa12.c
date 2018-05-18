/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 16/05/2018                             */
/* Descripcion: usa la Formula de la suma de los primeros n numeros*/
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)
{
  int n, suma; /* declaracion de variables */
  printf("Formula para sumar los primeros 100 numeros enteros\n" );
  printf("Ingrese un numero : " );/* Solicita un numero al usuario */
    scanf("%d", &n );
  suma = (n*(n+1))/2;/* Formula para obtener la suma de los n numeros naturales */
  printf("La suma de los primeros %d numeros es de : %d\n", n, suma  );/* Imprime los resultados en pantalla */
  return 0;
}
