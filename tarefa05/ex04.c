#include <stdio.h>

float somaNum(float num1, float num2)
{
  float numSoma;
  if (num1<num2) {
    for (int i = num1; i <= num2; i++) {
    numSoma=numSoma+i;
    }
  }else {
    for (int i = num2; i <= num1; i++) {
    numSoma=numSoma+i;
    }
  }
  
  return numSoma;
}
 
void main() {
  float soma;
  float n1,n2;
 
  printf("Num 1: ");
  scanf ("%f", &n1);

  printf("Num 2: ");
  scanf ("%f", &n2);
 
 
  soma = somaNum(n1,n2);
 
  printf("A soma é: %0.2f\n", soma);
}