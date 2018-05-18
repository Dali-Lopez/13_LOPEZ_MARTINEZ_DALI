/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Factorial de un numero                             */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
int main()
{
	double numero, var = 1, count;	/* Declaracion de multiples variables*/

	puts("FACTORIAL DE UN NUMERO \n"); /* Nombre del programa */

		printf("Ingrese el numero : ");

		scanf("%lf", & numero);

			for (int i = 1 ; i <= numero; ++i)
			{
				count = var * i;   /* Operacion para sacar el valor de un numero n facotial */

				var = count;       	/* Un numero facotiral es la multiplicacion de todos sus digitos anteriores*/
			}
			printf("%.0lf! = %.0lf\n", numero, count ); /* Imprime numeros dobles para evitar problemas de digitos a mostar*/
	return 0;
}
