// Dado um número inteiro positivo, calcular a soma de todos os números inteiros compreendidos entre 1 e o número dado. 
// Fazer uma versão com while e outra com for. Caso o número apresentado for negativo ou zero, solicitar a entrada novamente.
// Use o comando do while para esta finalidade.

#include <stdio.h>

int main () {
    int n,i,soma;
    i=1;
    n=0;
    while (n<=0) {
        printf("Digite um numero N, para saber a soma de 1 a N: ");
        scanf("%d",&n);
        if (n<=0) {
            printf("O numero não pode ser 0, nem negativo!\n");
        }    
    }
    while (i<=n) {
        soma=soma+i;
        i++;
    }
    printf("A soma de 1 a %d é: %d\n",n,soma);

    return 0;
}