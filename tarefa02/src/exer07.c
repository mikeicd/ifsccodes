#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)

int main()
{
	float x;
  int z;

  
  printf("1 - Converter para radianos.\n");
  printf("2 - Converter para graus.\n");
  printf("Selecione uma das opções acima:");
  scanf("%d",&z);

  printf("Digite o número a ser convertido: ");
  scanf("%f",&x);
    
  switch (z)
  {
  case 1:
    printf("%.3f em radianos é: %.3f\n",x,x*(M_PI/180));
    break;
    
  case 2:
    printf("%.3f em graus é: %.3f\n",x,x*(180/M_PI));
    break;

  default:
    printf("Opção não existe");
  }

return 0;
}