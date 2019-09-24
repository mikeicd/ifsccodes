#include <stdio.h>

int main()
{
	float x,y,z;
  
  printf("Informe o lado x: ");
  scanf("%f",&x);
  printf("Informe o lado y: ");
  scanf("%f",&y);
  printf("Informe o lado z: ");
  scanf("%f",&z);
    
  if ((x>(y+z)) || (y>(x+z)) || (z>(x+y)))  {
    printf("Não é um triangulo!\n");
  } else if ((x==y) && (x==z))  {
    printf("Equilatero!\n");
  } else if ((x==y) || (x==z) || (y==z)) {
    printf("Isoceles!\n");
  }	else  {
    printf("Escaleno!\n");
  }
  
return 0;
}