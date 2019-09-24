#include <stdio.h>

int main()
{
  float r,v,i;
  
  printf("Informe a resistência:");
  scanf("%f",&r);

  printf("Informe a tensão:");
  scanf("%f",&v);

  i=v/r;

  printf("A corrente que está passando neste componente é %.2f A.\n",i);

return 0;
}