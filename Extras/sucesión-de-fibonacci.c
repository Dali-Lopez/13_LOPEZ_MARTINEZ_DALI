/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Sucesion de fibonacci                              */
/* 				            		                               */
/*_________________________________________________________________*/



/*Declaracion de la biblioteca principal*/
#include <stdio.h>
/* Funcion principal */
int main()
{
	int numero, a = 0, b = 1, c; /*Declaracion multiple de variables*/
	printf("Sucesion de fibonacci\n\n");
	printf("Ingrese los primeros n numeros a mostrar : ");
	scanf("%d", &numero);
	printf("1\n"); /*La serie empieza en 1 */
	while (numero > 1 )
		{
			c = a + b;           /* La es igual a 0 y b es igual a 1, la suma es 1, el segundo numero de la serie*/
			printf("%d\n", c);
			a = b;				/* a le asignamos b el cual vale 1 y a b le asignamos c el cual vale uno ya la suma es 2, el 3 numero de la serie*/	
			b = c;    /*y asi sucesivamente */
			numero --;
		}
	return 0;
}