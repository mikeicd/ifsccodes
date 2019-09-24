//Escreva um programa C que teste se um número informado pelo teclado é primo.
#include <stdio.h>

int main () {
  int n=0,primo=0;

  while (n<=0)  {
    printf("Digite um numero para verificar se ele é primo: ");
    scanf("%d",&n);
    if (n>0) {
      break;
    }
    printf("O numero deve ser um numero natural! n>=0\n");
   }
    
  //Números primos são os números naturais que têm apenas dois divisores diferentes: o 1 e ele mesmo.
  for (int i = 2; i < n; i++)
  {
    if (n%i==0) {
      primo++;
    }    
  }
  if (primo>0) {
    printf("Numero não é primo!\n");
  } else {
    printf("Numero é primo!\n");
  }
  return 0;
}