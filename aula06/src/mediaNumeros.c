#include <stdio.h>

int main () {
    int n,soma=0,val=0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Informe o %d° numero: ",i);
        scanf("%d",&val);
        soma=soma+val;
        printf("Soma até o momento: %d\n",soma);   
    }
    printf("A soma total é:  %d\n",soma);
    return 0;
}