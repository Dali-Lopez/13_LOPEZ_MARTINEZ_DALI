/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com      				   */
/* Fecha de Creacion : 20/05/2018                                  */
/* Fecha de Actualizacion : 24/05/2018                             */
/* Descripcion: Estructura		                                   */
/* 				            		                               */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
#include <string.h>
struct Biblioteca_videojuegos
{
	char titulo_del_juego[30];
	char consola[20];
	char genero[20];
	int discos_disponibles;
	float precio;
	int anio_compra;

}Biblioteca_videojuegos[20];
int main(void)
{
	int opcion, n, var;
	printf("Biblioteca de Juegos\n");
	printf("Menu\n");
	printf("1.- Registrar juegos\n");
	printf("2.- Añadir juego nuevo\n");
	printf("3.- Imprimir juegos disponibles\n");
	printf("4.- Salir\n");
	do{
		printf("\n\nIngrese una opcion : ");
			scanf("%d", &opcion);
		while(getchar() != '\n');
		switch(opcion)
		{
			case 1:
				printf("\n\n Ingrese el numero de juegos que desea agregar : " );
					scanf("%d", &n );

				for (int i = 0; i < n; ++i)
					{
						while(getchar() != '\n');/* wacha esto miren*/
						printf("Juego #%d\n", i+1 );
						printf("\nIngrese el titulo del juego  : ");
							fgets(Biblioteca_videojuegos[i].titulo_del_juego, 30, stdin);
							strcpy(Biblioteca_videojuegos[i].titulo_del_juego, strtok(Biblioteca_videojuegos[i].titulo_del_juego, "\n"));

						printf("\nIngrese la plataforma del juego (consola) : " );
							fgets(Biblioteca_videojuegos[i].consola,20,stdin);
							strcpy(Biblioteca_videojuegos[i].titulo_del_juego, strtok(Biblioteca_videojuegos[i].titulo_del_juego, "\n"));

						printf("\nIngrese el genero : " );
							fgets(Biblioteca_videojuegos[i].genero,20,stdin);
							strcpy(Biblioteca_videojuegos[i].titulo_del_juego, strtok(Biblioteca_videojuegos[i].titulo_del_juego, "\n"));

						printf("\nIngrese los discos disponibles : " );
							scanf("%d", &Biblioteca_videojuegos[i].discos_disponibles);

						printf("\nIngrese el precio del juego : " );
							scanf("%f", &Biblioteca_videojuegos[i].precio);

						printf("\nIngrese el año de lanzamiento : " );
							scanf("%d", &Biblioteca_videojuegos[i].anio_compra);
						printf("\n\n\n" );
					}
			break;


			case 2:
			if (n <= 20)
			{

			printf("\nIngrese el titulo del juego  : ");
				fgets(Biblioteca_videojuegos[n].titulo_del_juego, 30, stdin);
				strcpy(Biblioteca_videojuegos[n].titulo_del_juego, strtok(Biblioteca_videojuegos[n].titulo_del_juego, "\n"));

			printf("\nIngrese la plataforma del juego (consola) : " );
				fgets(Biblioteca_videojuegos[n].consola,20,stdin);
				strcpy(Biblioteca_videojuegos[n].titulo_del_juego, strtok(Biblioteca_videojuegos[n].titulo_del_juego, "\n"));

			printf("\nIngrese el genero : " );
				fgets(Biblioteca_videojuegos[n].genero,20,stdin);
				strcpy(Biblioteca_videojuegos[n].titulo_del_juego, strtok(Biblioteca_videojuegos[n].titulo_del_juego, "\n"));

			printf("\nIngrese los discos disponibles : " );
				scanf("%d", &Biblioteca_videojuegos[n].discos_disponibles);

			printf("\nIngrese el precio del juego : " );
				scanf("%f", &Biblioteca_videojuegos[n].precio);

			printf("\nIngrese el año de lanzamiento : " );
				scanf("%d", &Biblioteca_videojuegos[n].anio_compra);
					n++;
				}else
						{
							printf("\nNO SE PUEDEN AGREGAR MAS JUEGOS\n" );
						}
			break;


			case 3:
						printf("\n\nJuegos en la Biblioteca\n\n" );

						for (int i = 0; i < n; i++)
						{
							printf("Juego numero #%d\n\n", i+1 );
							printf("Titulo : %s\n", Biblioteca_videojuegos[i].titulo_del_juego);
							printf("Consola : %s", Biblioteca_videojuegos[i].consola);
							printf("Genero : %s", Biblioteca_videojuegos[i].genero);
							printf("Discos disponibles : %d\n", Biblioteca_videojuegos[i].discos_disponibles);
							printf("Precio : %f\n", Biblioteca_videojuegos[i].precio);
							printf("Año de lanzamiento : %d", Biblioteca_videojuegos[i].anio_compra);
							printf("\n\n\n" );
						}
			break;


			case 4:
				printf("Saliendo del programa.\n");
			break;
		}
	}while (opcion < 5 && opcion > 0);
	return 0;
}
