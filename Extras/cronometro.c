/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion : 12/04/2018                                  */
/* Fecha de Actualizacion : 02/05/2018                             */
/* Descripcion: Cronometro                                         */
/* 				            		                               */
/*_________________________________________________________________*/


/* Biblioteca estandar de entrada y salida */
#include <stdio.h>  /* Bibliotecas vistan en clase */
#include <stdlib.h> /* gestión de memoria dinámica */
#include <unistd.h> 
int main(void)
{
	int Minutos, Segundos; /* Declaracion de variables */
	system("clear"); /* Limpia la pantalla */
	printf("Ingrese el numero de minutos : ");
		scanf("%d", &Minutos);
		
	printf("Horas : Minutos : Segundos \n");  /* Dado los numeros que ingrese el usuario se detendra el ciclo */

		for ( int j = 0; j <= Minutos; j++) /* Ciclo for para contar los minutos */
		{
			for ( Segundos = 0; Segundos <= 60; Segundos++) /* Ciclo for para contar los segundos, el cual avanza mas rapido que los demas */
			{
				printf("%d : %d \n", j, Segundos ); /* Imprime en pantalla la simulacion del reloj */
				sleep(1); /* El ciclo se detiene por 1 segundo, y asi se va imprimiendo cada segundo en pantalla, de tal manera que simule un reloj */
			}
		}
	printf("Tiempo finalizado");
  return 0;
}
