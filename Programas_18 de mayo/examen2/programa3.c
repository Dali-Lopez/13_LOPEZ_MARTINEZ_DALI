/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 17/05/2018                             */
/* Descripcion: Convierte de mayusculas a minusculas               */
/* 				                    		                                 */
/*_________________________________________________________________*/
/* Biblioteca principal */
#include <stdio.h>
int main(void)
{
  char letras[] = { "EJEMPLO" }, minusculas[8];/* Declaracion de cadena de caracteres */
  printf("Convierte el siguiente texto a minusculas\n" );
  printf("%s\n", letras );
  for (int i = 0; i < 7; i++)
  {
    minusculas[i] = letras[i] + 32;/* Convierte de mayusculas a minusculas usando los numeros del codigo assi */
  }
  printf("%s\n", minusculas );/* Imprime la cadena en pantalla */
  return 0;
}
