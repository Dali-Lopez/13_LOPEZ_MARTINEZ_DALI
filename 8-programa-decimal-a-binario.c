/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com						   */
/* Fecha de Creacion :  25/04/2018                                 */
/* Fecha de Actualizacion : 25/04/2018                             */
/* Descripcion: convertir de decimal a binario y de binario        */
/* 				a decimal            		                       */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
#include <math.h>
/* Funcion principal */
int main(void)
{
	int numero = 0, binario[50], contador = 0, casos, otro_numero, var, decimal; /* variables para almacenar los datos */
	printf("\n\n\nConvertir de Decimal a Binario y Binario a Decimal\n\n"); /* Titulo del menu */
	printf("1.- Decimal a Binario\n"); /* imprime en pantalla el menu */
	printf("2.- Binario a Decimal\n");
	printf("Ingrese una opcion : ");
		scanf("%d", &casos);             /* opcion para los diferentes casos a elegir */
	switch(casos) /* Funcion switch para los 2 casos distintos*/
	{
		case 1: /* Caso 1, Decimal a Binario */
			printf("\nDecimal a Binario\n\n"); /* Titulo del programa y solicita datos */
			printf("\n\n Ingrese un numero en decimal \n");
				scanf("%d", &numero ); /* Lee numero */
				otro_numero = numero; /* variable extra para conservar el valor de numero */
    		do /* Ciclo do while para hacer los calculos */
				{
					binario[contador] = numero%2; /* Asigna el valor 1 o 0 al arreglo, para posteriormente imprimirlos */
					numero = numero/2; /* Divide el numero entre 2 hasta que ya no se pueda */
					contador++; /* Aumenta la posicion del arreglo */
				}while(numero > 0);

			printf("%d en binario es ", otro_numero); /* Imprime los datos al usuario */
			for (int i = contador -1; i >= 0; --i) /* Ciclo for para imprimir los datos obtenidos en el arreglo de forma inversa */
			{
				printf("%d", binario[i] );
			}
			printf("\n\n");
		break;


		case 2: /* Caso 2, de binario a Decimal */
			printf("\n\n Binario a Decimal\n\n"); /* imprime el Titulo y solicita datos al usuario */
			printf("Ingrese la cantidad de digitos del numero en binario : ");
				scanf("%d", &var);
			for (int i = 0; i < var; ++i) /* Ciclo for para guardar los 0 y 1 en el arreglo */
			{
				printf("Ingrese el %d digito : ", i+1 );
				scanf("%d", &binario[i]);
				printf("\n");
			}
			contador = var -1; /* Variable para elevar a cierto exponente el 2 para sacar el valor en Binario */
				for (int i = 0; i < var ; ++i)
				{
					if (binario[i] == 1) /* Cuando vale 1, se eleva 2 para encontrar el valor */
					{
						decimal = pow (2, contador ); /* Cuando la base 2 se eleva se va sumando para obtener el valor del numero en binario */
						numero = numero + decimal;
					}
					contador--;/* Controla el exponente de 2 */

				}
				printf("%d\n", numero );
		break;


		default: /* En cualquier otro caso, muestra un letrero en pantalla */
			printf("Nel, opcion no valida :´v\n");
		break;
	return 0;
	}
}
