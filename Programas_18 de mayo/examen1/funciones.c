#include <stdio.h>
#include "funciones.h"

/* Funcion saludo */
void saludos(void)
{
  printf("Hola Mundo :v\n" );
}

/* Funcion area */
float area_rectangulo(float base, float altura)
{
  return base * altura;
}

/* funcion volumen */
float volumen_rectangulo(float largo, float ancho, float altura )
{
  float volumen;
  volumen = largo * ancho * altura;
  printf("El volumen es de %.2f m³ \n", volumen );
  return volumen;
}

/* funcion metros */
float metros_cubicos_litros(float volumen)
{
  float litros;
  litros = volumen * 1000;
  printf("%f m³ es igual a %.2f litros \n", volumen, litros );
}

/*Imprime los numeros del 100 al 0*/
int del_100_al_0(void)
{
  for (int i = 100; i >= 0; i--)/* Ciclo for para imprimir los numeros del 100 al 0 */
  {
    printf("%d\n", i );
  }
}


/*Indica si el numero es par o impar*/
int numero_par_o_impar(int numero)
{
  if(numero % 2 == 0)
  {
    printf("El numero %d es un numero par\n", numero );
  }else
      {
        printf("El numero %d es un numero impar\n", numero );
      }
}


/*Indica si el numero es positivo o negativo*/
int positivo_o_negativo(int numero)
{
  if(numero > 0)
  {
    printf("El numero %d es un numero positivo\n", numero );
  }else
      {
        printf("El numero %d es un numero negativo\n", numero );
      }
}


/*Factorial de un numero*/
double FACTORIAL(double numero)
{
  double var = 1, facotial;
  for (int i = 1 ; i <= numero; ++i)
  {
    factorial = var * i;   /* Operacion para sacar el valor de un numero n facotial */

    var = facotial;       	/* Un numero facotiral es la multiplicacion de todos sus digitos anteriores*/
  }
  printf("%.0lf! = %.0lf\n", numero, facotial ); /* Imprime numeros dobles para evitar problemas de digitos a mostar*/
}

/* Convertir de minusculas amayusculas */
/*void convertir_Minusculas_a_Mayusculas(char array[])
{
  int tamanio = sizeof(array[])/sizeof(char);
  for (int i = 0; i < tamanio; i++)
  {
    array[i] = array[i] - 32;
  }
  printf("%s\n", array[] );
}*/
