/* 2. Implementar uma função que recebe um vetor de inteiros e sua dimensão como parâmetros. A função deve retornar a
média de TODOS os números ímpares NÃO NEGATIVOS contidos no vetor. Uma demonstração do uso da função
deve ser apresentado no programa principal (função main) usando variáveis inicializadas (NÃO USAR scanf) [2,0 pts].
Obs: Testar, passando como parâmetro o seguinte vetor:
int alfa[5]={-5,-3,7,10,11}; */

#include <stdio.h>

float funMedia(int aux1[], int aux2) {
  float soma = 0, j = 0;
  for (int i = 0; i < aux2; i++) {
    if (aux1[i]%2 == 1 && aux1[i] > 0) {
      soma = soma + aux1[i];
      j++;
    }    
  }
  return  (float)soma/j;
}

void main () {

  int alfa[5]={-5,-3,7,10,11};
  float media;

  media = funMedia(alfa,5);

  printf("Meida é  %.2f\n",media);

}
