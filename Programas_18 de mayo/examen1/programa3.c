/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: litraje de una alberca                             */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
#include "funciones.h"
int main(void)
{
  float largo, ancho, altura, volumen, litros;
  printf("Litraje de una alberca \n" );
  printf("Ingrese el ancho de la alberca \n" );
    scanf("%f", &ancho );
  printf("Ingrese el largo de la alberca \n" );
    scanf("%f", &largo );
  printf("Ingrese la altura de la alberca \n" );
    scanf("%f", &altura );
  volumen = volumen_rectangulo(largo, ancho, altura);
  metros_cubicos_litros(volumen);
  return 0;
}
