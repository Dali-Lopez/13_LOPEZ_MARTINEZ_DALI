/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Suma las posiciones de una matriz                  */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)
{/* Incia una matriz de 5x5 */
  int arreglo[5][5] = {{1,2,3,4,5},
                      {1,2,3,4,5},
                      {5,4,3,2,1},
                      {1,2,3,4,5},
                      {9,8,7,6,5}};
  int suma = 0;/* variable para sumar los datos */
  printf("Del siguiente arreglo, obtener la suma de las posiciones iguales\n" );
  for (int i = 0; i < 5; i++)/* Imprime la matriz en pantalla */
  {
    for (int j = 0; j < 5; j++)
    {
      printf(" %d ", arreglo[i][j] );
    }
    puts("\n");
  }
  printf("\n\nLa suma de las posiciones iguales son :\n" );
  for (int i = 0; i < 5; i++)/* Realiza la suma de la posicion en donde la columna y fila son iguales */
  {
    for (int j = 0; j < 5; j++)
    {
      if (i == j)
      {
        suma += arreglo[i][j];
      }
    }
    puts(" ");
  }
  printf("La suma total es : %d \n", suma );/* Imprime los resultados en pantalla */
  return 0;
}
