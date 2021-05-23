/*Dep3_Prog5: 
Verificar que elemento (Fuego, Tierra, Aire, Agua)
corresponde un signo del zodiaco*/
#include <stdio.h>

int main()
{
    int signo;
    printf("\n            Signos del Zodiaco \n\n");
    printf("\n 1.Aries");
    printf("\n 2.Tauro");
    printf("\n 3.Geminis");
    printf("\n 4.Cancer" );
    printf("\n 5.Leo");
    printf("\n 6.Virgo");
    printf("\n 7.Libra");
    printf("\n 8.Escorpion");
    printf("\n 9.Sagitario");
    printf("\n 10.capricornio");
    printf("\n 11.Acuario");
    printf("\n 12.Picis");
    
    printf("\n Escribe el número que sea tu signo");
    scanf("%d", &signo);
    
    switch(signo)
    {
      case 1:
      case 5:    
      case 9:
             printf("\n Tu elemento es el Fuego");
             break;
      case 2:
      case 6:
      case 10:
             printf("\n Tu elemento es la Tierra");
             break;
      case 3:
      case 7:
      case 11:
             printf("\n Tu elemento es el Aire");
             break;
      case 4:
      case 8:
      case 12:
              printf("\n Tu elemento es el Agua");
              break;
      default:
              printf("El número no corresponde a un signo del Zodiaco");
              break;      
    }
    
    return 0;
}