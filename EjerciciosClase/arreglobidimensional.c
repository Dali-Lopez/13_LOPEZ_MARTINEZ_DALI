/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 24/04/2018                                  */
/* Fecha de Actualizacion : 24/04/2018                             */
/* Descripcion: Arreglo bidimensional                              */
/* 				            		                               */
/*_________________________________________________________________*/
/* Biblioteca principal */
#include <stdio.h>
#include <stdlib.h>
#define ROW 3 /*Filas*/
#define COL 3 /*Columnas*/
#define MAX 100 /* Limite superior de los datos aleatorios*/
int main(void)
{
	int array[ROW][COL];
	printf("\n\nArreglo bidimensional\n\n");
	/* Inicializar con valores enteros aleatorios */
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			/*asignacion de array*/
			/* utilizar la funcion scanf para solicitar datos al usuario */
			/* utilizar la funcion  */
			array[i][j] = rand() % (MAX); 
			/* Generar valores aleatorios de tipo real entre 0 y 1000 */
		}
	}
	printf("\x1b[5m Datos aleatorios de la Matriz[%d][%d]\n\n", ROW, COL)];
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			printf(" %d ", array[i][j] );
		}
		printf("\n\n");
	}
	return 0;
}