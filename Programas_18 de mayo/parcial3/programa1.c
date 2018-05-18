/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Imprime un rectangulo con  " * "                   */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>/* Biblioteca principal */
int main(void)
{
  int x,y;
  printf("rectangulo con * \n" );
  printf("Ingrese el valor de la base : " );/* Solicita datos al usuario */
    scanf("%d", &x );
  printf("Ingrese el valor de la altura : " );
    scanf("%d", &y );
  for (int i = 0; i < y; i++)/* Ciclos para imprimir los asteriscos */
  {
    for (int j = 0; j < x; j++)
    {
      printf("*");
    }
    puts("\n");
  }
  return 0;
}
