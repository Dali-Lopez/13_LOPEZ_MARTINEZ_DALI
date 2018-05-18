#include <stdio.h>
struct Alumnos
{
	int edad;
};
typedef struct 
{
	char titulo[20];
}LIBRO;
void ImprimirMensaje(void);
int Area_Rectangulo(int base , int altura );
int main(void)
{	/* Invocar una funcion */
	int area, base, altura;
	printf("Arela de un rectangulo\n");
	printf("Ingrese la base del rectangulo : ");
		scanf("%d", &base);
	printf("Ingrese la altura del rectangulo : ");
		scanf("%d", &altura);	
	area = Area_Rectangulo( base, altura);	
	printf("El area es de %d \n", area );
	return 0;
}

struct Alumnos nuevoAlumno(void)
{
	struct Alumnos alumno1 = (20);	
	return alumno1;
};

int Area_Rectangulo(int base, int altura)
{
	return base * altura;
}

void ImprimirMensaje(void)
{
	printf("Hola Mundo\n");
}