/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Suma de los primeros 100 numeros                   */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)
{
  int suma = 0;
  printf("Suma de los primeros 100 numero\n" );
  for (int i = 1; i <= 100; i++)/* Ciclo para sumar los primeros numeros  */
  {
    suma += i;
  }
  printf("%d\n", suma );/* Imprime los resultados en pantalla */
  return 0;
}
