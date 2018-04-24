/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 12/04/2018                             */
/* Descripcion: Ordena un arreglo                                  */
/* 				            		                               */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
int main()
{
	int vector[10], var; /* Declaracion de variables */
	printf("Ordenamiento de un arreglo \n");
	for (int i = 0; i < 10; ++i)/* Solicita datos al usuario */
	{
		printf("Ingrese el %d numero : ", i+1 );
			scanf("%d", &vector[i]);
	}
	for (int i = 0; i < 10; ++i) /* Ordena los datos usando el metodo burbuja */
	{
		for (int j = 0; j < 10; ++j)
		{
			if (vector[j]>vector[j+1])
			{
				var = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = var;
			}
		}
	} /* Imprime los datos */
	printf("Ordenamiento de menor a mayor\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", vector[i] );
	}
	printf("\n de Mayor a menor\n");
	for (int i = 10; i >=0 ; i--)
	{
		printf("%d\n", vector[i] );
	}
}