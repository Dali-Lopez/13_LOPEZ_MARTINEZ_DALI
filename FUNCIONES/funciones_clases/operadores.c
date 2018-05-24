#include <stdio.h>
void cambiarvalor(int x, int y);
int main(void)
{
	int a = 10;
	int b = 5;
	
	printf("\nEntrada 1, a: %d	b: %d\n", a, b);
	/* Invocar a la funcion */
	cambiarvalor( a, b );
	printf("\nEntrada 2, a: %d	b: %d\n", a, b);
	return 0;
}

void cambiarvalor(int x, int y )
{
	int aux;
	aux = x;
	x = y;
	y = aux;
}