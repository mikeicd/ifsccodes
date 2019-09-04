#include <stdio.h>

int main()
{
  int n1,n2;
  float restoMedia;
  
  printf("Informe o 1° Número:");
  scanf("%d",&n1);

  printf("Informe a 2° Número:");
  scanf("%d",&n2);

  restoMedia=(n1+n2)%2;

  printf("O resto da média é: %.2f\n",restoMedia);

return 0;
}