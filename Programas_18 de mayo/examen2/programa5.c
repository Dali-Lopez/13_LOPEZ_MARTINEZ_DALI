/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: busca el numero menor de un arreglo                */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
  int main(void)
  {/* Incia y declara el arreglo */
    int arreglo[10] = {123, 2, 3, 54, 6, 1, 6, 3, 12, 100}, menor;
    printf("\nEl numero mayor en el siguiente arreglo\n");
    for (int i = 0; i < 10; i++)
    {
      printf("%d ", arreglo[i] );/* Imprime en pantalla los datos del arreglo */
    }
    menor = arreglo[0];/* Inicia la variable menor con el primer numero del arreglo */
    for (int i = 0; i < 10; i++)/* Ciclo for para comparar el dato de menor con los demas del arreglo */
    {
      if (arreglo[i] < menor)
      {
        menor = arreglo[i];/* Reasigna el numero menor si encuentra otro numero menor a el */
      }
    }
    printf("\nEl numero menor es : %d\n", menor );/* Imprime los datos en pantalla */
  return 0;
}
