/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Imprime una piramide en pantalla                   */
/* 				            		                               */
/*_________________________________________________________________*/


/* Biblioteca principal de entrada y salida*/
#include <stdio.h>
/*Funcion principal*/
int main(void)
{
	int altura, espacios; /* Declaracion de variables */
	printf("RECTANGULO CON * \n");
	printf("Ingrese la altura del rectangulo : ");
	scanf("%d", &altura );                        /* Pide al usuario solo la altura */
	puts("\n");
	for (int i = 1; i <= altura ; ++i) /* Ciclo for para controlar la altura */
	{
		
		for (int espacios = 1; espacios <= altura -i; espacios++) /* Ciclo for para controlar el numero de espacios, empieza con * y va aumentando */
		{                                                               /* Si la torre mide 5 se tiene que dejar 4 espacios. Altura - 1*/
			printf(" "); /* Imprime los espacion */                     
		}
		for (int j = 1; j <= (2*i)-1 ; ++j) /* Ciclo for para controlar los * asteriscos */
		{
			printf("*"); /* Imprime los asteriscos */
		}
		printf("\n");

	}
	puts("\n");
	
	return 0;
}