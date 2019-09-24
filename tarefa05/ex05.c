#include <stdio.h>

int fatorial(int num)
{
  int fat=1;
  for (int i = 1; i <= num; i++) {
    fat=fat*i;
  } 
  return fat; 
}
 
void main() {
  int n1,n2,n3;
 
  n1 = fatorial(5);
  n2 = 4;
  n3 = fatorial((n2*3));

  printf("O fatorial 1 é: %d\n", n1);
 
  printf("O fatorial 2 é: %d\n", n3);
}