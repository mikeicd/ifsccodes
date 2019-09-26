#include <stdio.h>

void main () {
    int vet1[5],vet2[5];

    for (int i = 1; i <= 5; i++) {
        printf("Insira o %d° numero: ",i);
        scanf("%d",&vet1[i]);
        vet2[i]=vet1[i]*5;
    }

    for (int i = 1; i <= 5; i++) {
        printf("O %d° valor de vet2 é: %d \n",i,vet2[i]);
    }
}