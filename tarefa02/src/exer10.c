#include <stdio.h>

int main()
{
	int x;
    
  printf("Escolha um numero de 1 a 10: ");
  scanf("%d",&x); //numero

  switch (x)
  {
  case 0:
    printf("Zero\n");
  break;

  case 1:
    printf("Um\n");
  break;

  case 2:
    printf("Dois\n");
  break;

  case 3:
    printf("Tres\n");
  break;
  
  case 4:
    printf("Quatro\n");
  break;
  
  case 5:
    printf("Cinco\n");
  break;
  
  case 6:
    printf("Seis\n");
  break;
  
  case 7:
    printf("Sete\n");
  break;
  
  case 8:
    printf("Oito\n");
  break;
  
  case 9:
    printf("Nove\n");
  break;
  
  case 10:
    printf("Dez\n");
  break;

  default:
    printf("Opção não exite.\n");
  break;
  }     
return 0;
}