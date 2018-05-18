/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Crea una Estructura                                */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>/* Biblioteca principal */
struct alumno/* Creacion de la Estructura */
{
  char nombre[30];
  int edad;
  float peso;
}alumno1 = {"Dali Lopez Martinez", 20, 90};/* Inicia la Estructura con algunos valores */
int main(void)
{
  printf("Estructura de un alumno\n" );/* Imprime los datos de la estructuras */
  printf("Nombre del alumno : %s\n", alumno1.nombre );
  printf("Edad del alumno : %d\n", alumno1.edad );
  printf("Peso del alumno : %.2f kg\n", alumno1.peso );
  return 0;
}
