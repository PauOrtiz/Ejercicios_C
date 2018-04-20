#include <stdio.h>
int main ()
{
  int arreglo [4], tam, pos, indice, numero;
  printf ("Introduce el tamaño del arreglo:");
  scanf ("%i”, &tam);
 
   for (indice=0; indice<=tam-1; indice++)
    {
       printf ("Introduce un valor numérico para el arreglo:\n");
       scanf ("%i”, & arreglo[indice]);
    }
  printf ("En que posición quieres insertar el número:");
  scanf ("%i”, &pos);
 
  printf ("Introduce el número:");
  scanf ("%i”, &numero);
 
  for (indice=tam; indice>=pos+1; indice--)
    {
      arreglo [indice]=arreglo[indice-1];
      arreglo[pos]=numero;
    }
 
    for (indice=0; indice<=tam; indice++) {
     printf ("%i, “, arreglo[indice]);   
    }
   getchar ();
  return 0;
}
