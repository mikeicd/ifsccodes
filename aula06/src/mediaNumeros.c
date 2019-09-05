#include <stdio.h>

int main () {
    int n,soma,val;

    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Informe o %d° numero: ",i);
        scanf("%d",&val);
        soma=soma+val;
        
        
    }
    return 0;
}