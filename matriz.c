#include<stdio.h>
#define TAM 100
int main ()
{
  int m[TAM][TAM], columna, fila, indice_fila, indice_columna;
  printf ("Ingresa el número de columnas ");
  scanf ("%i", &columna);
  printf ("Ingresa el número de filas ");
  scanf ("%i", &fila);
  for (indice_fila = 0; indice_fila < fila; indice_fila++)
    {
      for (indice_columna = 0; indice_columna < columna; indice_columna++)
       {
         printf ("Escribe las calificaciones para las posiciones[%i][%i] del arreglo:  \n\t",indice_fila + 1, indice_columna + 1);
          scanf ("%i", &m[indice_fila][indice_columna]);
	   }
    }
  printf ("\n\t\ Las calificaciones almacenadas en  la matriz son:");
  printf ("\n\n");
  for (indice_fila = 0; indice_fila < fila; indice_fila++)
     {
      printf ("\n\t");
        for (indice_columna = 0; indice_columna < columna; indice_columna++)
         {
         printf ("  %i  ", m[indice_fila][indice_columna]);
	     }
       }
  getchar ();
  return 0;
}
