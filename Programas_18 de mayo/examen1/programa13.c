/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: suma de los numeros pares e impares                */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>/* Biblioteca principal */
int main(void)
{
  int suma_pares = 0, suma_impares = 0;/* declaracion de variables */
  printf("De los numeros del 1 al 100 \n" );
  for (int i = 1; i <= 100; i++)/* Ciclo para sumar los numeros pares e impares */
  {
    if(i % 2 == 0)/* Condiciones para saber si es par o impar y posteriormente los suma */
    {
      suma_pares += i;
    }else
        {
          suma_impares += i;
        }
  }
  printf("La suma de los numero pares es de : %d\n", suma_pares );/* Imprime los datos en pantalla */
  printf("La suma de los numeros impares es de : %d\n", suma_impares );
  return 0;
}
