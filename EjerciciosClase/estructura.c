/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion :  26/04/2018                                 */
/* Fecha de Actualizacion : 26/04/2018                             */
/* Descripcion: Tipo de datos de estructura                        */
/* 				                    		                       */
/*_________________________________________________________________*/
/*Biblioteca principal*/
#include <stdio.h>
#include <string.h>
/* Colores */
#define RESET_COLOR "\x1b[0m"
#define NEGRO_T     "\x1b[30m"
#define NEGRO_F     "\x1b[40m"
#define ROJO_T      "\x1b[31m"
#define ROJO_F      "\x1b[41m"
#define VERDE_T     "\x1b[32m"
#define VERDE_F     "\x1b[42m"
#define AMARILLO_T  "\x1b[33m"
#define AMARILLO_F  "\x1b[43m"
#define AZUL_T      "\x1b[34m"
#define AZUL_F      "\x1b[44m"
#define MAGENTA_T   "\x1b[35m"
#define MAGENTA_F   "\x1b[45m"
#define CYAN_T      "\x1b[36m"
#define CYAN_F      "\x1b[46m"
#define BLANCO_T    "\x1b[37m"
#define BLANCO_F    "\x1b[47m"

#define TAM 20 /* Declaracion del tamaño del arreglo */
#define ROW 5  /* Declaracion de las filas */
#define COL 5  /* Declaracion de las columnas */
/* Definicion de tipos de datos estructura */ 
/* struct Alumno
{
	char matricula[10];
	char curp[18]
	char nivel_de_estudio[30]
	char nombre[50];
	int edad;
	char sexo[1];
	char fecha_de_nacimiento[10];
	float peso;
	float estatura;
	char tipo_de_sangre[20];
	char telefono[12];
	char Direccion[50];
	char alergia[20];
	char deporte[15];
};*/
struct Alumno
{
	char matricula[10];
	char nombre[50];
	char sexo[1];
	int edad;
	float peso;
	float estatura;
};
/* Cuerpo de la funcion */
int main(void)
{
	/* Declaracion de la estructura */
	struct Alumno alumnoX; /* Declaracion de la variable alumno */
	/* asignacion de datos a los miembros de la estructura alumno */
	/* Tipo de operador punto */
	/* 
	alumnoX.matricula = "2017060236" */
	/*strcpy(cadena en la que se asigna, lo que quieres asignar)*/
	strcpy(alumnoX.matricula, "2017060236");
	strcpy(alumnoX.nombre, "Santos alumnoX");
	alumnoX.sexo = 'H';
	alumnoX.edad = 18;
	alumnoX.estatura = 1.68;
	alumnoX.peso = 60;
	printf(ROJO_T"%s\n", alumnoX.nombre );
	return 0;
}