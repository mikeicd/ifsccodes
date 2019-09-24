#include <stdio.h>

float dif_area_circunferencia(float raio1, float raio2)
{
  float area1,difArea;
 
  area1 = (raio1*raio1)*3.14;
  difArea = (area1-((raio2*raio2)*3.14));
  return difArea;
}
 
void main()
{
  float area;
  float r1,r2;
 
  printf("Raio 1: ");
  scanf ("%f", &r1);

  printf("Raio 2: ");
  scanf ("%f", &r2);
 
 
  area = dif_area_circunferencia(r1,r2);
 
  printf("A diferença das areas é: %0.2f\n", area);
}