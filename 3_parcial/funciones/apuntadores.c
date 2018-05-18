#include <stdio.h>
void cambiarvalor(int, int);
int main(void)
{
	int x = 5;
	int y = 10;
	printf("\nX : %d", x);
	printf("\nY : %d\n", y);

	printf("\nX : %p", &x);
	printf("\nY : %p\n", &y);
	/* Invocar a la funcion */
	cambiarvalor( x, y );

	printf("\n\n\nX : %d", x);
	printf("\nY : %d\n", y);

	printf("\nX : %p", &x);
	printf("\nY : %p\n", &y);
	return 0;
}

void cambiarvalor(int x, int y )
{
	printf("\n\n\nfX : %d", x);
	printf("\nfY : %d\n", y);

	printf("\ncX : %p", &x);
	printf("\ncY : %p\n", &y);
	int temporal;
	temporal = x;
	y = temporal;
	x = y;
}