/*_________________________________________________________________*/
/* Autor Dali Lopez Martinez                                       */
/* E-mail : DaliLopez-MartinezT@hotmail.com         						   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Imprime un menu en pantalla                        */
/* 				                    		                                 */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)
{/* Uso de enum para los diferentes casos */
  enum menu {INGRESAR = 1, MOSTRAR, ACTUALIZAR, ELIMINAR, SALIR};
  int opcion;
 printf("MENU\n");/* Imprime en pantalla las opciones del menu */
 printf("1.- INGRESAR\n");
 printf("2.- MOSTRAR\n");
 printf("3.- ACTUALIZAR\n");
 printf("4.- ELIMINAR\n");
 printf("5.- SALIR\n");
 printf("Ingrese una opcion : ");
  scanf("%d", &opcion );
 switch (opcion)/* Funcion switch para los diferentes casos */
 {
   case INGRESAR:
    printf("Usted esta en opcion INGRESAR\n" );
   break;

   case MOSTRAR:
       printf("Usted esta en opcion MOSTRAR\n" );
   break;


   case ACTUALIZAR:
       printf("Usted esta en opcion ACTUALIZAR\n" );
   break;

   case ELIMINAR:
       printf("Usted esta en opcion ELIMINAR\n" );
   break;

   case SALIR:
       printf("Usted esta en opcion SALIR\n" );
   break;

   default:
    printf("Opcion no disponible :(\n" );
   break;

 }
 return 0;
}
