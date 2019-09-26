#include <stdio.h>

int main () {
    float vet1[10];
    int i;


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
return 0;
}