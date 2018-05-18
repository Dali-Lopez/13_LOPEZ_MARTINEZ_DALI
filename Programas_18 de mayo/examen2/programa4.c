/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Encuentra el numero mayor de un arreglo            */
/* 				                    		                                 */
/*_________________________________________________________________*/
/* Biblioteca principal */
#include <stdio.h>
int main(void)
{ /* Incia y declara el arreglo */
  int arreglo[10] = {1, 2, 3, 54, 6, 4, 6, 3, 12, 100}, mayor;
  printf("\nEl numero mayor en el siguiente arreglo\n");
  for (int i = 0; i < 10; i++)/* Imprime en pantalla los datos del arreglo */
  {
    printf("%d ", arreglo[i] );
  }
  mayor = arreglo[0];/* Inicia la variable mayor con el primer numero del arreglo */
  for (int i = 0; i < 10; i++)/* Ciclo for para comparar el dato de mayor con los demas del arreglo */
  {
    if (arreglo[i] > mayor)
    {
      mayor = arreglo[i];
    }
  }
  printf("\nEl numero mayor es : %d\n", mayor );/* Imprime los datos en pantalla */
  return 0;
}
