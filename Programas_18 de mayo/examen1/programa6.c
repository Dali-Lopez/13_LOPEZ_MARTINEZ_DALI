/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 16/05/2018                             */
/* Descripcion: Indica si puedes votar en las elecciones           */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h> /* Biblioteca principal */
int main(void)
{
  int edad;
  printf("\nMayor de edad\n" );/* Solicita datos al usuario */
  printf("Ingrese su edad : " );
    scanf("%d", &edad );
  if (edad >= 18)/* Condicion para saber si puedes votar o no */
  {
    printf("Puede votar en las elecciones \n");
  }else
      {
        printf("Usted no puede votar :´v\n" );
      }
  return 0;
}
