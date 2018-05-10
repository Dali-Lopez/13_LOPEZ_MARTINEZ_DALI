#include <stdio.h>
int main()
{
		int base, var, exponente, x = 0;
		printf("Ingrese una base : ");
			scanf("%d", &base);
		printf("Ingrese el exponente :");
			scanf("%d", &exponente);
		var = base;	
		for (int i = 2; i <= exponente; ++i)
		{	
			x = base * var;
			var = x;		
		}
		printf("%d\n", x );
}		