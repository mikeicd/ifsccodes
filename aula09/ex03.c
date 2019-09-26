#include <stdio.h>

int main () {
    float vet1[10],media=0,soma=0;
    int i=0,maior=0;


    while (i<10) {
        printf("Insira o %d° numero: ",i+1);
        scanf("%f",&vet1[i]);
        i++;
    }
    i=0;
    while (i<10) {
        printf("O valor do %d° numero é: %.2f\n",i+1,vet1[i]);        
        i++;
    }
    i=0;    
    while (i<10) {
        soma=vet1[i]+soma;       
        i++;
    }
    media=soma/10.0;
    printf("A média é: %.3f\n",media);
    i=0;
    while (i<10) {
        if (vet1[i]>=media) {
            maior++;
        }
    i++;
    }
    printf("A quantitade de numeros maiores que a média é: %d\n",maior);
return 0;
}