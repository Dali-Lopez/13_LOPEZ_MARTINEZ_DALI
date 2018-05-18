/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: distancia entre dos puntos                         */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h> /*Biblioteca principal*/
#include <math.h> /* Biblioteca creada por mi :v */
int main(void)
{
  int x1,x2, y1,y2; /* declaracion de variables */
  float distancia;
  char c;
  printf("Distancia entre 2 puntos\n" );
  printf("Ingrese los datos del punto 1 separados por comas, ejemplo 3,4\n" );
  printf("Punto 1 : " );
    scanf("%d%c%d",&x1,&c,&y1 ); /* Lee los 2 datos y la coma */
  printf("Punto 2 : " );
    scanf("%d%c%d",&x2,&c,&y2 ); /* Lee los 2 datos y la coma */
    distancia = sqrt( pow((x2-x1), 2) + pow((y2-y1), 2) );/* Formula para la distancia entre dos puntos */
  printf("La distancia del punto %d%c%d al punto %d%c%d es de %.2f \n",x1,c,y1,x2,c,y2,distancia );
  return 0;
}
