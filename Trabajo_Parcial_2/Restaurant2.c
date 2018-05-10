/*------------------------------------------------------------*/
/*Autor: Equipo 2---------------------------------------------*/ 
/*Cortes Gonzalez Esther--------------------------------------*/
/*Mendoza Hernandez Galdina-----------------------------------*/
/*Lopez Matinez Dalí------------------------------------------*/
/*Nasario Anselmo Belisario-----------------------------------*/
/*Mendoza Vázquez, Delfino------------------------------------*/
/*Fecha de creación: 03/05/18---------------------------------*/
/*Fecha de actualización: 10/05/18----------------------------*/
/*Descripción: Estructura "Restaurant"------------------------*/







#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

/* El codigo de colores fue tomado de la siguiente pagina:  */
/* www.forosdelweb.com/f96/printf-otros-colores-836106      */

#define _RESET        "\x1b[0m"     /* Resetear el color.   */
#define _ARESET       "\E[m"        /* Resetear todo.       */

#define _TNEGRO       "\x1b[30m"    /* Define el color del texto en negro.              */
#define _TROJO        "\x1b[31m"    /* Define el color del texto en rojo.               */
#define _TVERDE       "\x1b[32m"    /* Define el color del texto en verde.              */
#define _TAMARILLO    "\x1b[33m"    /* Define el color del texto en amarillo.           */
#define _TAZUL        "\x1b[34m"    /* Define el color del texto en azul.               */
#define _TMORADO      "\x1b[35m"    /* Define el color del texto en morado.             */
#define _TCYAN        "\x1b[36m"    /* Define el color del texto en cyan.               */
#define _TBLANCO      "\x1b[37m"    /* Define el color del texto en blanco.             */

#define _FNEGRO       "\x1b[40m"    /* Define el color del fondo del texto en negro.    */
#define _FROJO        "\x1b[41m"    /* Define el color del fondo del texto en rojo.     */
#define _FVERDE       "\x1b[42m"    /* Define el color del fondo del texto en verde.    */
#define _FAMARILLO    "\x1b[43m"    /* Define el color del fondo del texto en amarillo. */
#define _FAZUL        "\x1b[44m"    /* Define el color del fondo del texto en azul.     */
#define _FMORADO      "\x1b[45m"    /* Define el color del fondo del texto en morado.   */
#define _FCYAN        "\x1b[46m"    /* Define el color del fondo del texto en cyan.     */
#define _FBLANCO      "\x1b[47m"    /* Define el color del fondo del texto en blanco.   */

#define _NEGRITA      "\E[1m"       /* Negrita.        */
#define _NNEGRITA     "\E[22m"      /* No negrita.     */
#define _CURSIVA      "\E[3m"       /* Ccursiva.       */
#define _NCURSIVA     "\E[23m"      /* No cursiva.     */
#define _SUBRAYADO    "\E[4m"       /* Subrayado.      */
#define _NSUBRAYADO   "\E[24m"      /* No subrayado.   */
#define _PARPADEANTE  "\E[5m"       /* Parpadeante.    */
#define _NPARPADEANTE "\E[25m"      /* No parpadeante. */

/*Declaración de constantes*/
#define N 30
#define CO 30
#define TEL 15
#define HO 20
#define M 20

/* Declaracion de enumeraciones para el control de menu de opciones:                */
/* CREAR      = 1                                                                   */
/* LISTAR     = 2                                                                   */
/* LISTAR_ASC = 3                                                                   */
/* LISTAR_DES = 4                                                                   */
/* BUSCAR     = 5                                                                   */
/* ACTUALIZAR = 6                                                                   */
/* ELIMINAR   = 7                                                                   */
/* SALIR      = 8                                                                   */
enum OPCIONES_MENU{CREAR = 1, LISTA, ORDASC, ORDDES, BUSCAR, ACTUALIZAR, ELIMINAR, SALIR};



/*Declaración de la estructura "Restaurant"*/

typedef struct
{
	char nombre[N]; 
	char direccion[N];
	char correo[CO];
	char horario[HO];
	int telefono;
	
}restaurant;

/*Declaración de la función principal*/
int main(void)
{
	restaurant rest[N];
	char c, nombrebuscar[N];
	int array[N];
	int i, opcion, num, aux;
	system("clear");
	do
	{
		system("clear");
		/*SE IMPRIME UN MENÚ*/
		printf("\n\n\n");
		printf("\t\t\t\t\tMENÚ PARA EL CONTROL DE RESTAURANES\n\n\n");
		printf("\n\t\t\t1.INGRESAR RESTAURANTES.");
		printf("\n\t\t\t2.LISTA DE RESTAURANTES");
		printf("\n\t\t\t3.LISTA EN ORDEN ASCENDENTE");
		printf("\n\t\t\t4.LISTA EN ORDEN DESCENDENTE");
		printf("\n\t\t\t5.BUSCAR");
		printf("\n\t\t\t6.ACTUALIZAR");
		printf("\n\t\t\t7.ELIMINAR");
		printf("\n\t\t\t8.SALIR.\n\n");
		printf("\n\tSelecione una opción: ");
		scanf("%d",&opcion);
		
		printf("\n\n");
		

		/*SE INICIA EN UN SWHITCH*/
		switch(opcion)
		{
			case CREAR:
				/*Preguntaremos al usuario cuantos restaurantes desea agregar al registro*/
				printf("\nEscribe cuantos restaurantes desea agregar al registro: ");
				scanf("%d", &num);
				
				for(i=0;i<num;i++)
				{
					while(getchar() != '\n');
					printf("Nombre: ");
					fgets(rest[i].nombre, N, stdin);
					strcpy(rest[i].nombre, strtok(rest[i].nombre, "\n"));


					/*PEDIMOS LA DIRECCIÓN DEL RESTAURANT*/
					//setbuf(stdin,NULL); /* Limpiar el buffer */
					printf("Dirección: ");
					fgets(rest[i].direccion, N, stdin);
					strcpy(rest[i].direccion, strtok(rest[i].direccion, "\n"));

					
					/*PEDIMOS EL CORREO ELECTRONICO DEL RESTAURANT*/
					//setbuf(stdin,NULL); /* Limpiar el buffer */
					printf("E-mail: ");
					fgets(rest[i].correo, CO, stdin);
					strcpy(rest[i].correo, strtok(rest[i].correo, "\n"));
					


					/*PEDIMOS EL HORARIO DE TRABAJO*/
					//setbuf(stdin,NULL); /* Limpiar el buffer */
					printf("Horario de servicio: ");
					fgets(rest[i].horario, HO, stdin);
					strcpy(rest[i].horario, strtok(rest[i].horario,"\n"));
					
					

					/*PEDIMOS EL TELEFONO DE CONTACTO*/
					
					printf("Teléfono: ");
					scanf("%d", &rest[i].telefono);
					printf("\n\n");
					
					
					
				}
				while(getchar() != '\n'); /* Limpiar el buffer */
				printf("Presiones Enter para salir: ");
				while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
				{}

			break;
			case LISTA:

				printf("\n\n2. LISTA DE RESTAURANTES\n\n");


				/* Ciclo for: permite imprimir los datos de los ingresados por el usuario */
				printf("\n");
				printf("%-20.25s|%-20s|%-18s|\tHORARIO\t|   TELÉFONO    |", "NOMBRE", "DIRECCION", "EMAIL");
              	printf("\n---------------------------------------------------------------------------------------------------------------------------\n");
				for(i=0;i<num;i++)
				{
					printf("%-20.25s|%-20s|%-18s|\t%s\t|\t%2.2d\t|", rest[i].nombre, 
        			rest[i].direccion, 
					rest[i].correo, 
					rest[i].horario,  
					rest[i].telefono);
					
					printf("\n");
				}

				while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf("\n\n\nPresiones Enter para salir: ");
						
				while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
				{}								
				
			break;
			case ORDASC:
				while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf("\n\n3. LISTAR ASCENDENTE\n\n");


				for(int i = 0; i < num; i++)
					array[i] = i;

							
				for(int i = 0; i < num; i++)
				for(int j = i + 1; j < num; j++)
					if(strcmp(rest[array[i]].nombre, rest[array[j]].nombre) > 0)
					{
						aux = array[i];
						array[i] = array[j];
						array[j] = aux;
					}
							
							

					/* Ciclo for: permite imprimir los datos de los ingresados por el usuario */
					
					printf("%-40.25s|%-12s|%-18s|\tHORARIO\t|   TELÉFONO    |", "NOMBRE", "DIRECCIÓN", "CORREO");
					printf("\n---------------------------------------------------------------------------------------------------------------------------\n");
					for(int i = 0; i < num; i++)
					{
						
						printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%2.2d\t|", rest[array[i]].nombre, 
						rest[array[i]].direccion, 
						rest[array[i]].correo, 
						rest[array[i]].horario, 
						rest[array[i]].telefono); 
						printf("\n");

					}

					/* printf(_TROJO     _NEGRITA "\n\nEn construccion ...!");*/
					printf("\n\nPresione Enter para regresar al menu principal: ");
					while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
					{}
			break;




			/*ORDENAR DESENDENTE*/
		
			case ORDDES:
				while(getchar() != '\n');/* Limpiar el buffer*/
				printf("\n\n3. LISTA EN FORMA DESCENDENTE\n\n");


				for(int i = 0; i < num; i++)
					array[i] = i;

							
				for(int i = 0; i < num; i++)
				for(int j = i + 1; j < num; j++)
					if(strcmp(rest[array[i]].nombre, rest[array[j]].nombre) < 0)
					{
						aux = array[i];
						array[i] = array[j];
						array[j] = aux;
					}
							
				/* Ciclo for: permite imprimir los datos de los ingresados por el usuario */
				printf("%-40.25s|%-12s|%-18s|\tHORARIO\t|   TELÉFONO    |", "NOMBRE", "DIRECCIÓN", "CORREO");
    			printf("\n-------------------------------------------------------------------------------------------------------------------------\n");
				for(int i = 0; i < num; i++)
				{
				printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%d\t", rest[array[i]].nombre, 
				rest[array[i]].direccion, 
				rest[array[i]].correo, 
				rest[array[i]].horario,
				rest[array[i]].telefono);
				printf("\n");

				}

				/* printf(_TROJO     _NEGRITA "\n\nEn construccion ...!");*/
				printf("\n\nPresione Enter para regresar al menu principal: ");
				while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
				{}
			break;




			/*BUSCAR UN RESTAURANT EN LA ESTRUCTURA*/

			case BUSCAR:
				while(getchar() != '\n');/* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf("\n\nIngrese el nombre del restaurant: ");
				fgets(nombrebuscar, N, stdin);
				strcpy(nombrebuscar, strtok(nombrebuscar, "\n"));	
				for(int i = 0; i < num; i++)
				if((strcmp(nombrebuscar, rest[i].nombre)) == 0)
				{
				printf("%-40.25s|%-12s|%-18s|\tHORARIO\t|   TELÉFONO    |", "NOMBRE", "DIRECCION", "EMAIL");
              	printf("\n---------------------------------------------------------------------------------------------------\n");	
				printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%d\t|", rest[i].nombre, 
        		rest[i].direccion, 
				rest[i].correo, 
				rest[i].horario,  
				rest[i].telefono);
				}
				printf("\n\nPresione Enter para regresar al menu principal: ");
				while((c=getchar()) != '\n')/* Solicita un enter al usuario para reiniciar el menu principal */
				{}
			break;
			case ACTUALIZAR:
				while(getchar() != '\n');/* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf("\n\n ACTUALIZAR\n\n");
				printf("Buscar el restaurant por nombre a actualizar:\n\n");
						
				printf("\n\nIntroduce el nombre: ");
				fgets(nombrebuscar, N, stdin);
				strcpy(nombrebuscar, strtok(nombrebuscar, "\n"));														
				for(int i = 0; i < num; i++)
				{
					if(strcmp(nombrebuscar, rest[i].nombre) == 0)
					{																
						printf("%-40.25s|%-12s|%-18s|\tHORARIO\t|   TELÉFONO    |", "NOMBRE", "DIRECCION", "EMAIL");
    		        	printf("\n---------------------------------------------------------------------------------------------------\n");	
						printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%d\t|", rest[i].nombre, 
    					rest[i].direccion, 
						rest[i].correo, 
						rest[i].horario,  
						rest[i].telefono);
																
					printf("\n\n");	


					printf("Introduce el nombre del restaurant: ");
					fgets(rest[i].nombre, N, stdin);/* Solicita el nombre del alumno al usuario*/
					strcpy(rest[i].nombre, strtok(rest[i].nombre, "\n"));/* Elimina el salto de linea '\n' que genera fgets() */
		
					printf("Introduce la dirección del restaurant: ");
					fgets(rest[i].direccion, CO, stdin);/* Solicita la matricula el alumno al usuario*/
					strcpy(rest[i].direccion, strtok(rest[i].direccion, "\n"));/* Elimina el salto de linea '\n' que genera fgets() */
					printf("Introduce el correo del restaurant: ");
					fgets(rest[i].correo, HO, stdin);/* Solicita la fecha de nacimiento al usuario*/
					strcpy(rest[i].correo, strtok(rest[i].correo, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */
					
					printf("Horario de servicio del restaurant: ");
					fgets(rest[i].horario, HO, stdin);
					strcpy(rest[i].horario, strtok(rest[i].horario,"\n"));
											
					
					printf("Ingresa el teléfono del restaurant: ");
					scanf("%d", &rest[i].telefono);
					printf("\n\n");
								
					while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */


					printf("%-40.25s|%-12s|%-18s|\tHORARIO\t|   TELÉFONO    |", "NOMBRE", "DIRECCION", "EMAIL");
      				printf("\n---------------------------------------------------------------------------------------------------\n");	
					printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%d\t|", rest[i].nombre, 
        			rest[i].direccion, 
					rest[i].correo, 
					rest[i].horario,  
					rest[i].telefono);
					}
				}
				while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf("\n\nPresione Enter para regresar al menu principal: ");
				while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
				{}
			break;
							
			case ELIMINAR:
						
				while(getchar() != '\n');/* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf("\n\n ELIMINAR\n\n");
	
				printf("Buscar el restaurant por nombre a eliminar:\n\n");
						
				printf("\n\nIntroduce el nombre: ");
				fgets(nombrebuscar, N, stdin);
				strcpy(nombrebuscar, strtok(nombrebuscar, "\n"));														
				for(int i = 0; i < num; i++)
				{
					if(strcmp(nombrebuscar, rest[i].nombre) == 0)
					{																
						printf("%-40.25s|%-12s|%-18s|\tHORARIO\t|   TELÉFONO    |", "NOMBRE", "DIRECCION", "EMAIL");
      		        	printf("\n---------------------------------------------------------------------------------------------------\n");	
						printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%d\t|", rest[i].nombre, 
        				rest[i].direccion, 
						rest[i].correo, 
						rest[i].horario,  
						rest[i].telefono);
					}											
					printf("\n\n");	


	
					printf("\n\nPresione una (s) si esta seguro de eliminar el registo:  ");
					char opcionEliminar;
					while((opcionEliminar = getchar()) == 's')
					{
						for(int j = i; j < num-1; j++)
						{
							strcpy(rest[j].nombre,  rest[j+1].nombre);
							strcpy(rest[j].direccion, rest[j+1].direccion);
							strcpy(rest[j].correo, rest[j+1].correo);
							strcpy(rest[j].horario,  rest[j+1].horario);
						 	rest[j].telefono = rest[j+1].telefono;

																			
						}

						printf("\n\nEl registro se ha eliminado exitosamente.\n\n");
					}
					strcmp(rest[num-1].nombre, "");
					strcmp(rest[num-1].direccion, "");
					strcmp(rest[num-1].correo, "");
					strcpy(rest[num-1].horario, "");
					rest[num-1].telefono = -1;
					
	
					num--;
																			
	              	printf("\n\n");
				}
				printf("\n\nPresione Enter para regresar al menu principal: ");
				while((c=getchar()) != '\n')/* Solicita un enter al usuario para reiniciar el menu principal*/
				{}										
				break;
				
				case SALIR:
					system("clear");              /*Antes de terminar la ejecucion del programa, limpia la pantalla*/
					exit(0);                      /*Termina la ejecucion del programa*/

		}




	}while(opcion != SALIR);


	return 0;
}

























