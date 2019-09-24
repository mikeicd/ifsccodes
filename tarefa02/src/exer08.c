#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,delta,x1,x2;
  
  printf("Informe a variavel A: ");
  scanf("%f",&a);
  printf("Informe a variavel B: ");
  scanf("%f",&b);
  printf("Informe a variavel C: ");
  scanf("%f",&c);
  
  delta=((b*b)-4*a*c);

  if (delta<0)  {
    printf("Não tem raiz real!\n");
  } else  {
    x1=(-b+sqrtf(delta))/(2*a);
    x2=(-b-sqrtf(delta))/(2*a);

    printf("As raizes são %f e %f\n",x1,x2);
  }
  
return 0;
}