#include <stdio.h>

void main () {
    int notas[10],soma,media,maior;

    for (int i = 1; i <= 10; i++) {
        printf("Insira o %d° numero: ",i);
        scanf("%d",&notas[i]);
        soma=soma+notas[i];                   
    }
    media=soma/10;

    for (int i = 1; i <= 10; i++) {
        if (notas[i]>=media) {
            maior++;
        }
    }
    
    printf("A média é: %d\n",media);
    printf("A quantidade de notas acima da média é: %d\n",maior);
}