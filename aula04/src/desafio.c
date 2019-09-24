#include <stdio.h>
#include <math.h>

int main()
{
  float o,u,n1,n2,n3,n4,n5,n6,n7;
  
  printf("Determine os 7 valores a serem analizados para o calculo do desvio padrão da população:\n");
  printf("1° Valor:");
  scanf("%f",&n1);
  printf("2° Valor:");
  scanf("%f",&n2);
  printf("3° Valor:");
  scanf("%f",&n3);
  printf("4° Valor:");
  scanf("%f",&n4);
  printf("5° Valor:");
  scanf("%f",&n5);
  printf("6° Valor:");
  scanf("%f",&n6);
  printf("7° Valor:");
  scanf("%f",&n7);

  u=(n1+n2+n3+n4+n5+n6+n7)/7.0;
  o=sqrtf((powf((n1-u),2.0))+(powf((n2-u),2.0))+(powf((n3-u),2.0))+(powf((n4-u),2.0))+(powf((n5-u),2.0))+(powf((n6-u),2.0))+(powf((n7-u),2.0))/7.0);

  printf("O desvio padrão é de: %f.\n",o);

return 0;
}