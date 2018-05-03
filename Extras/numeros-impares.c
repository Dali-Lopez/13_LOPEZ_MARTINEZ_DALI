/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Numeros impares                                    */
/* 				            		                               */
/*_________________________________________________________________*/



/* Biblioteca principal de entrada y salida*/
#include <stdio.h>

/*Funcion principal*/
int main(void)
{
	int numero, impar = 1;  /* declaracion de variables */
	printf("NUMEROS IMPARES\n\n");
	printf("Ingrese la cantidad de los primeros numero impares a mostrar : ");
	scanf ("%d", &numero );

	for (int i = 1; i <= numero; ++i) /* Ciclo for para imprimir en pantalla los numero impares */
	{
		printf("%d \n", impar ); /* Imprime en pantalla el primer numero impar que es 1 */
		impar = 2 * i + 1; /* Impar es igual a 1 y se multiplica la i por 2 y se le suma 1 para sacar todos los numeros impares */
	}	

	return 0;
}