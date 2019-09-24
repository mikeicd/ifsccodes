#include <stdio.h>

int main()
{
  float raio,area,comprimento;
  
  printf("Informe o raio da circunferência:");
  scanf("%f",&raio);

  comprimento=2.0*3.14*raio;
  area=3.14*(raio*raio);

  printf("A área da circunferencia é %.2fcm e o comprimento é %.2fcm.\n",area,comprimento);

return 0;
}