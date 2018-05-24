/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 12/04/2018                             */
/* Descripcion: el mayor de un numero                              */
/* 				            		                               */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)
{
	int x = 10;
	int y = 1;
	int and = x & y;
	int or = x | y;
	int xor = x ^ y;
	printf("and : %d\n", and);
	printf("or : %d\n", or);
	printf("xor : %d\n", xor);
	printf("%d >> %d\n", x, x >> 2 );
	return 0;
}