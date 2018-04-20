
#include <stdio.h>
#include <conio.h>
/*programa que le permite a un estudiante conocer las materias que le corresponden cursar por semestre y sus datos asociados*/
void main()
{
  int num_semestre,opcion;  
    printf("Ingresa tu semestre\n");
    scanf("%i",& num_semestre);
     if (num_semestre>3)
     {
       printf ("BIENVENIDO AL SISTEMA DE CONSULTA DE HORARIOS ESCOLARES ONLINE\n"); 
       printf("Elige la carrera que cursas\n"); 
      printf("1: Ingeniería en computación. \n 2: Ingeniería mecánica");
      scanf("%i",&opcion);
        switch (opcion)
        {
        case 1: printf ("Cuarto semestre\n Análisis de circuitos eléctricos\n Estructuras discretas\n Programación de sistemas\n"); 
        break; 
        case 2: printf("Cuarto semestre\n Ciencia y tecnología de materiales\n Fundamentos de mecánica de sólidos\n Mecánica de fluidos\n");
        break;
        default: ("OPCIÓN NO VALIDA\n");
        }
     } 
    else printf("EN EL SISTEMA SÓLO ESTÁN CARGADOS LOS HORARIOS ESCOLARES A PARTIR DEL CUARTO SEMESTRE\n");
    getch();
}
