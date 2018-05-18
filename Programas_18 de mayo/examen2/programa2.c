/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 17/05/2018                             */
/* Descripcion: Convierte de minusculas a mayusculas               */
/* 				                    		                                 */
/*_________________________________________________________________*/
/* Biblioteca principal */
#include <stdio.h>
int main(void)
{
  char letras[] = { "ejemplo" }, mayusculas[8];/* Declaracion de cadena de caracteres */
  printf("Convierte el siguiente texto a mayusculas\n" );
  printf("%s\n", letras );
  for (int i = 0; i < 7; i++)
  {
    mayusculas[i] = letras[i]-32;/* Convierte de minusculas a mayusculas usando los numeros del codigo assi */
  }
  printf("%s\n", mayusculas );/* Imprime la cadena en pantalla */
  return 0;
}
/*
97-122 minusculas
diferencia de 32
65- 90  mayusculas
*/
