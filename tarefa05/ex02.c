#include <stdio.h>

float area_circunferencia(float raio)
{
  float area;
 
  area = (raio*raio)*3.14;
  return area;
}
 
void main()
{
  float area;
  float r;
 
  printf("Raio: ");
  scanf ("%f", &r);
 
 
  area = area_circunferencia(r);
 
  printf("A area da circunferencia é  %0.2f\n", area);
}