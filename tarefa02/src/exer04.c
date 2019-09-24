#include <stdio.h>

int main()
{
	float x,y;
  int z;

  printf("Digite o 1º número: ");
  scanf("%f",&x);
  printf("Digite o 2º número: ");
  scanf("%f",&y);
  
  printf("Selecione uma das opções.\n");
  printf("1 - Para somar.\n");
  printf("2 - Para subtrair.\n");
  printf("3 - Para multiplicar.\n");
  printf("4 - Para dividir.\n");
  scanf("%d",&z);

  switch (z)
  {
  case 1:
    printf("Somando: %.2f\n",(x+y));
    break;
    
  case 2:
    printf("Subtraindo: %.2f\n",(x-y));
    break;
    
  case 3:
    printf("Multiplicando: %.2f\n",(x*y));
    break;

  case 4:
    printf("Dividindo: %.2f\n",(x/y));
    break;

  default:
    printf("Opção não existe!\n");   
    break; 
  }	
return 0;
}