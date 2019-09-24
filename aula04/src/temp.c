#include <stdio.h>

int main()
{
  float f,c;
  
  printf("Converter Farenheit para Celsios:");
  scanf("%f",&f);
  c=(f-32)/1.8;
  printf("A temperatura de %.2f Farenheit em Celsios é: %.2f\n",f,c);

return 0;
}