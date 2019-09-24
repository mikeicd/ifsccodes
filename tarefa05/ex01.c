#include <stdio.h>

float area_retang(float lado1, float lado2)
{
  float area;
 
  area = lado1 * lado2;
  return area;
}
 
void main()
{
  float area;
  float l1, l2;
 
  printf("Lado 1: ");
  scanf ("%f", &l1);
 
  printf("Lado 2: ");
  scanf ("%f", &l2);
 
  area = area_retang(l1,l2);
 
  printf("A area do retangulo é: %0.2f\n", area);
}