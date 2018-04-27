#include <stdio.h>
typedef int miInt2;
typedef int miInt;
typedef char miChar;
struct alumno
{
  miChar nombre[30];
};
typedef struct alumno miAlumno;
int main(void)
{
  miAlumno variableEstructura;
  miInt var; /* y asi esta cosa */
  return 0;
}
