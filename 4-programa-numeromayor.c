/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 12/04/2018                             */
/* Descripcion: el mayor de un numero                              */
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
	} /* Imprime los resultado en pantalla */
	printf("El numero menor es %d \n", vector[0]);
	printf("El numero mayor es %d \n", vector[9]);
	return 0;
}