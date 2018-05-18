/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: estructura de un libro                             */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
struct libro/* Creacion de la estructura */
{
  char titulo[50];
  char autor[30];
  int paginas;
}libro1 = {"Volar sobre el pantano", "Carlos Cuauhtémoc Sánchez", 250};/* asigna los valores a una variable */
int main(void)
{/* Imprime los datos en pantalla  */
  printf("Creacion de una estructura de un libro\n" );
  printf("Titulo : %s\n", libro1.titulo );
  printf("Autor : %s\n", libro1.autor );
  printf("Paginas : %d\n", libro1.paginas );
  return 0;
}
