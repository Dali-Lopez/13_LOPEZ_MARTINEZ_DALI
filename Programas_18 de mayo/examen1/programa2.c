/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Area de un terreno                                 */
/* 				                    		                                 */
/*_________________________________________________________________*/
/* Biblioteca principal */
#include <stdio.h>
#include "funciones.h" /* funciones creadas por mi :v */
int main(void)
{
  float area, altura, base; /* Variables a usar */
  printf("Area de un terreno\n" );
  printf("Ingrese la base : " ); /* Solicita datos al usuario */
    scanf("%f", &base );
  printf("Ingrese la altura : " );
    scanf("%f", &altura );
  printf("El area del terreno es de %.2f m^2 \n", area_rectangulo(base, altura) ); /* Uso de la funcion area_rectangulo */
  return 0;
}
