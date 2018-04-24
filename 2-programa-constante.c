/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 12/04/2018                             */
/* Descripcion: Uso de #define y macros			                   */
/* 				            		                               */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h> 
#define PI 3.1416  /* Declaracion de constantes con define */
#define G 9.81
#define TAMAO 10
#define MIN 0
#define MAX 100
/* Implementacion de macro*/
#define SUMA(x , y) (x+y)
#define RESTA(x , y) (x-y)
#define MULT(x , y) (x*y)
#define DIV(x , y) (x/y)
#define CUADRADO(x) (x*x)
#define CUBO(x) (x*x*x)
/* definir un ciclo*/
#define CICLOFOR(x , y) for (int x = 0; x < y; ++x)
#define CICLOWHILE(x , y) while( x < y )
#define CICLODOWHILE(x , y) do while(x<y)
const float pi = 3.1416;
const float g = 9.81;
const int  tamanio = 10;
const int min = 0;
const int max = 100;
int main(void)
{/* Imprime resultados en pantalla */
	printf("Constantes define \n\n");
	printf("PI %.4f\n", PI );
	printf("G %f\n", G );
	printf("TAMAO %d\n", TAMAO);
	printf("MIN %d\n", MIN);
	printf("MAX %d\n\n", MAX);
	printf("Constantes const \n\n" );
	printf("pi %.4f\n", pi );
	printf("g %.2f\n", g );
	printf("tamanio %d\n", tamanio );
	printf("min %d\n", min );
	printf("max %d\n", max );			
	int x = 5;
	int y = 10;
	printf("X = %d Y = %d);\n", x, y );
	printf (" SUMA = %d\n", SUMA (x , y));
	printf (" RESTA = %d\n", RESTA (x , y));
	printf (" MULT = %d\n", MULT (x , y));
	printf (" DIV = %d\n", DIV (x , y));
	printf (" CUADRADO = %d\n", CUADRADO (x));
	printf (" CUBO = %d\n", CUBO (x));
	
	CICLOFOR (x , y)
	{
		printf("Hola mundo\n");
	}
	x = 0;
	printf("\n\n\n");
	CICLOWHILE (x , y)
	{
 		printf("Hola Mundo\n");		
 		++x;
	}

	return 0;
}