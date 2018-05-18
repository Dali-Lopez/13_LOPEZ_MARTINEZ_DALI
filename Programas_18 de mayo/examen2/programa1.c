/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion:Escriba un programa que permita crear un arreglo    */
/* 		unidimensional de tipo flotante, de tamaño 10		             */
/*_________________________________________________________________*/

#include <stdio.h>/* biblioteca principal */
int main(void)
{
  float arreglo[10] = {21.1, 34.98, 2.64, 32.12, 2.12,  1.012, 31.3, 15.4, 2.13, 23.1}, arreglo_copia[10];
  printf("  Arreglos con valores flotantes\n");
  for (int i = 0; i < 10; i++) /* Imprime el arreglo original */
  {
    printf(" %f ", arreglo[i] );
  }
  for (int i = 0; i < 10; i++)/* Copia los valores del original a la copia */
  {
    arreglo_copia[i] = arreglo[i];
  }
  printf("\n\n arreglo copiado\n");
  for (int i = 0; i < 10; i++)/* Imprime los valores del arreglo copiado */
  {
    printf(" %f ", arreglo_copia[i] );
  }
  puts("\n");
  return 0;
}
