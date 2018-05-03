/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Ejemplo de una condicional                         */
/* 				            		                               */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
int main(void)/* Funcion principal */ 
{
	int num1 = 5 , num2 = 10; /* Declaracion de los datos a usar */
	if (num1 > num2) /* Hace multiples comparaciones con los datos */
	{
		printf("El numero %d es mayor que %d\n", num1, num2);
	}else if (num1 < num2)                                       
		{
			printf("El numero %d es menor que %d\n",num1, num2);
		}else 
			{
				printf("El numero %d es igual a %d\n", num1, num2);

			}

	return 0;
}
