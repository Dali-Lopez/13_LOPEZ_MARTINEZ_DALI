/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 24/04/2018                                  */
/* Fecha de Actualizacion : 27/04/2018                             */
/* Descripcion: Arreglo bidimensional con valores aleatorios       */
/* 				            		                               */
/*_________________________________________________________________*/
/* Biblioteca principal */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* acceso a la hora y fecha del sistema */
#define ROW 3 /*Filas*/
#define COL 3 /*Columnas*/
#define MAX 1000 /* Limite superior de los datos aleatorios*/
int main(void)
{
	srand (time(NULL));/* Genera valores aleatorios apartir de la fecha y hora */      
	int array[ROW][COL]; /* Declaracion del arreglo */
	printf("\n\n Arreglo bidimensional\n\n");
	/* Inicializar con valores enteros aleatorios */
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			/*asignacion de array*/
			/* utilizar la funcion scanf para solicitar datos al usuario */
			/* utilizar la funcion  */
			array[i][j] = rand() % (MAX+1); 
			/* Generar valores aleatorios de tipo real entre 0 y 1000 */
		}
	}
	printf("\x1b[5m Datos aleatorios de la Matriz[%d][%d]\n\n", ROW, COL); /* Imprime los valores obtenidos */
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