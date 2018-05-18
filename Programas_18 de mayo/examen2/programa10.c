/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 17/05/2018                             */
/* Descripcion: Ado programa                                       */
/* 				                    		                                 */
/*_________________________________________________________________*/
/* Biblioteca principal */
#include <stdio.h>
int main(void)
{
  int contador = 0, asientos[35] = {0}, var;
  printf("Venta de boletos \n" );
  do {
    printf("Ingrese un numero de asiento : " );
      scanf("%d", &var );
      if (var > 0 && var <= 35)/* Uso de multiples condiciones para saber si el asiento esta disponible */
      {
        if (asientos[var-1] == 0)
        {
          printf("Asiento disponible \n" );
          contador++;
          asientos[var-1] = 1;
        }else
            {
              printf("Asiento no disponible\n" );
            }
      }else
          {
              printf("Asiento vendido, favor de elegir otro asiento.\n" );
          }
  } while(contador <= 35);
  printf("Todos los boletos estan vendidos\n" );
  return 0;
}
