/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion :  02/05/2018                                 */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Tipo de datos de estructura                        */
/* 				                    		                       */
/*_________________________________________________________________*/
	
/* Biblioteca principal */
#include <stdio.h>
/* Declaracion de la funcion */
int suma(int x, int y);
float resta(float x, float y);
double multiplicacion(double x, double y);
	
int main(void) /* Funcion principal */
{	
	printf("\n la suma de x = %d + y = %d = %d \n", 5, 7, suma(5,7) );
	printf("\n la resta de x = %f + y = %f = %f \n", 5.5, 7.5, resta(5,7) );
	printf("\n la multiplicacion de x = %lf + y = %lf = %lf \n", 5.5, 7.5, multiplicacion(5,7) );
		return 0;/* Terminacion exitosa */
}	
/* Implementacion de la funcion suma */
int suma(int x, int y)
{	
	return x + y;
}	
/* Implementacion de la funcion resta */
float resta(float x, float y)
{	
	return x - y;
}
/* Implementacion de la funcion multiplicacion */
double multiplicacion(double x, double y)
{	
	return x * y;
}																			
