/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 22/04/2018                                  */
/* Fecha de Actualizacion : 24/04/2018                             */
/* Descripcion: Matriz                                             */
/* 				            		                               */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)
{ 
	int cuadrado[3][3] = {{1, 2, 3},{1,2,3},{1,2,3}};
	int rectangular[3][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}}; 
	int columa[5][1] = {{1},{2},{3},{4},{5}};
	printf("\nMatriz de cuadrada\n\n");
	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 3; ++j)
		{
			printf(" %d ", cuadrado[i][j] );
		}
		printf("\n");
	}
	printf("\nMatriz rectangular\n\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf(" %d ", rectangular[i][j] );
		}
		printf("\n");
	}
	printf("\nMatriz en columa\n\n");
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 1; ++j)
		{
			printf(" %d ", columa[i][j] );
		}
		printf("\n");
	}
	return 0;
}