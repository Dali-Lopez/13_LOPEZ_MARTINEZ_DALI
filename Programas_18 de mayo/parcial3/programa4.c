/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 18/05/2018                             */
/* Descripcion: Sumatorias                                         */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
int sumasM_N(int n);
int suma0_n(int n);
double suma_cuadratica(double n);
int main(void)
{
  int n,m;
  printf("SUMATORIAS" );
  printf("Suma de los numeros de m a n\n\n Ingrese el valor de m : " );
    scanf("%d", &m);
  printf("Ingrese el valor de n : " );
    scanf("%d", &n );
  printf("La suma de los numeros de m a n es : %d\n",sumasM_N( n, m ) );
  printf("Suma de 0 a n : %d\n", suma0_n(n) );
  printf("La suma de los cuadrados de 0 a n es : %.0lf\n", suma_cuadratica(n) );
  return 0;
}

/*suma de m a n*/
int sumasM_N(int n, int m);
{
  suma = 0;
  for (int i = m; i <= n; i++)
  {
    suma += i;
  }
  return suma;
}

/* suma de 0 a n */
int suma0_n(int n);
{
  suma = 0;
  for (int i = 0; i <= n; i++)
  {
    suma += i;
  }
  return suma;

}
/* suma del cuadrado de los numeros */
double suma_cuadratica(double n);
{
  for (int i = 0; i <= n; i++)
  {
    suma += (i*i);
  }
  return suma;
}
