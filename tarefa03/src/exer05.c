//Implemente um programa C para ler N resistências. O programa deve ler inicialmente N, depois o valor das resistências
//(fazendo os cálculos cumulativos) e então calcular o valor da resistência série e paralelo equivalente do circuito. 
//Não usar vetores. Usar um comando while.

#include <stdio.h>

int main () {
    int n,i;
    float par,ser,r;
    par = 0;
    i=1;
    printf("Indique a quantidade de resistores no sistema: ");
    scanf("%d",&n);

    while (i<=n) {
        printf("Insira o %d° resistor: ",i);
        scanf("%f",&r);

        par=par+(1/r);
        ser=ser+r;
        i++;
    }
    printf("Resistencia Equivalente em serie: %.2f, em paralelo: %.2f.\n",ser,(1/par));
    return 0;
}
