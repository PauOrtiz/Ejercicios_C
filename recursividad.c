#include <stdio.h>
void main ()
{
  int num, contador, factorial = 1;
  printf ("Introduzca un número para calcular su factorial\n");
  scanf ("%i", &num);
     for (contador = num; contador > 1; contador--)
      {
    factorial = factorial * contador;
      }
    printf ("El factorial de %i es = %i\n", num, factorial);
  getchar ();
}
