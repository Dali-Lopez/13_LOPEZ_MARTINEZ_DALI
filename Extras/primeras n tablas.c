/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Primeras n tablas de multiplicar                   */
/* 				            		                               */
/*_________________________________________________________________*/


/* Declaracion de la biblioteca estandar*/
#include <stdio.h>

/* Fucion principal*/
int main()
{
	int var, numero; /* Declaracion de multiples variables*/
	puts("Primeras n tablas de multiplicar \n");
	printf("Ingrese el numero de las primeras n tablas de multiplicar : ");
	scanf("%d", &numero);
	puts("\n\n");
	for (int i = 1; i <= numero; ++i) /* Doble ciclo for, uno para indicar el numero de tabla*/

	{
		printf("Tabla del %d \n\n", i );

		for (int j = 1; j <= 10; ++j) /* Indica el numero de multiplos*/
		{
			var = i * j;
			printf("%d x %d = %d \n", i, j, var ); /* Imprime los resultados*/
		}

		puts ("\n\n"); /* Salto de linea */
 
	}
	return 0;
}