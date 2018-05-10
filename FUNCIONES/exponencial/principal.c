#include <stdio.h>
/* Declarar el prototipo de la funcion */
double exponenteF(double b, int expo); 
double exponenteF_Negativo(double b, int expo);
int main()
{
	int base, exponente;
	float resultado;
	printf("Resolucion de potencia \n");
	printf("Ingrese la base : ");
		scanf("%d", &base);
	printf("Ingrese el exponente : ");
		scanf("%d", &exponente);
	if (exponente >= 2)
		{
			resultado = exponenteF(base, exponente);
			printf("El resultado es %.0f \n", resultado );
		}else
			{	
				resultado = exponenteF_Negativo(base, exponente);		
			printf("El resultado es %f \n", resultado );
			}			
	return 0;
}
/* Cuerpo de la  funcion */
double exponenteF(double b, int expo)
{
	double R;
	if (expo == 0)
		{
			R = 1;
		}else if(expo == 1){
				R = b;
			}else
				{
					R = b;	
					for (int i = 1; i < expo; ++i)
						{
							R *=b;
						}
				}
	return R;
}

double exponenteF_Negativo(double b, int expo)
{
	float R;
	if (expo == 0)
		{
			R = 1;
		}else if(expo == 1){
				R = b;
			}else
				{
					R = b;	
					for (int i = 1; i < expo; ++i)
						{
							R *=b;
						}
				}
	R = 1/R;			
	return R;
}