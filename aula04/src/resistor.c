#include <stdio.h>

int main()
{
  float x,y,paralelo,serie;

  printf("Entre com o 1° valor:");
  scanf("%f", &x);
  printf("Entre com o 2° valor:");
  scanf("%f", &y);
  paralelo= (x*y)/(x+y);
  serie= x+y;
  printf("Resistencia em paralelo é: %f e em série é: %f",paralelo,serie);
return 0;
}
