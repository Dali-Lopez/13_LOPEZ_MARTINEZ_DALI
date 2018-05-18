/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Tipo de datos de estructura                        */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
int suma_mn(int n, int m);
int suma0_n(int n);
double suma_cuadratica(double n);
int main(void)
{
  int n,m;
  printf("SUMATORIAS\n" );
  printf("Suma de los numeros de m a n\n\n Ingrese el valor de m : " );
    scanf("%d", &m);
  printf("Ingrese el valor de n : " );
    scanf("%d", &n );
    suma_mn(n,m);
    suma0_n(n);
    suma_cuadratica(n);
  return 0;
}

/*suma de m a n*/
int suma_mn(int n, int m)
{
  int suma = 0;
  for (int i = m; i <= n; i++)
  {
    suma += i;
  }
    printf("La suma de los numeros de m a n es : %d\n", suma );
  return suma;
}

/* suma de 0 a n */
int suma0_n(int n)
{
  int suma = 0;
  for (int i = 0; i <= n; i++)
  {
    suma += i;
  }
    printf("Suma de 0 a n : %d\n", suma );
  return suma;
}
/* suma del cuadrado de los numeros */
double suma_cuadratica(double n)
{
  double suma = 0;
  for (int i = 0; i <= n; i++)
  {
    suma += (i*i);
  }
    printf("La suma de los cuadrados de 0 a n es : %.0lf\n", suma );
  return suma;
}
