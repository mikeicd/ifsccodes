//Exemplo utilizando random.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int iSecret,iGuess;

    srand (time(NULL)); //iniciando sempre uma nova seed

    iSecret= rand() % 10 + 1; //Gerando um random de 10 a 1

    do {
        printf("Chute um numero de 1 a 10: ");
        scanf("%d",&iGuess);
        if (iSecret<iGuess) {
            printf("Maior que o segredo!\n");
        } else if (iSecret>iGuess) {
            printf("Menor que o segredo!\n");
        } 
    } while (iSecret!=iGuess);

    printf("Acerto Miseravel!!!\n");
    return 0;
}
