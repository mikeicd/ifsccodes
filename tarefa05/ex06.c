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
  int n1,n2,fat;
  
  printf("Informe o 1º numero: ");
  scanf("%d",&n1);

  printf("Informe o 2º numero: ");
  scanf("%d",&n2);

  fat = fatorial(n1) + fatorial(n2);

  printf("A soma dos fatoriais é: %d\n",fat);
}