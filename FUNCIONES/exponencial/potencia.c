#include <stdio.h>
/* Funcion principal*/
int main()
{
	int e, num_elementos, x, factorial,count, var, base, contador = 0;
	printf("Ingrese el valor de x : ");
		scanf("%d", &x);
	do
	{	
		var = x;	
		for (int i = 2; i <= exponente; ++i)
		{
			potencia = var * x;
			var = potencia;
		}
		for (int i = 1 ; i <= factorial; ++i)
			{
				count = var * i;   /* Operacion para sacar el valor de un numero n facotial */

				var = count;       	/* Un numero facotiral es la multiplicacion de todos sus digitos anteriores*/
			}
		contador++;		
	}while(contador <= num_elementos);		
	printf("\n");		
	return 0;
}