#include <stdio.h>

int main () {

  int soma;

  for (int i=1; i <= 500 ; i++) {
    if (i%2!=0 && i%3==0) {
      soma=soma+i;
    }
  }
  printf("A soma dos numeros impares e multiplos de 3 de 1 a 500 é: %d\n",soma);
  return 0;
}