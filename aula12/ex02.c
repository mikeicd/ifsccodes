#include <stdio.h>
#define TAM_MAT 50


void geraMatriz (int aux1[TAM_MAT][TAM_MAT], int aux2) {
    for (int i = 0; i < aux2 ; i++) {
        for (int j = 0; j < aux2 ; j++) {
            printf("Insira o numero da posição (%d , %d): ",i,j);
            scanf("%d",&aux1[i][j]);
        }
    }
}

void leMatriz (int aux1[TAM_MAT][TAM_MAT], int aux2) {
    printf("Matriz:\n");
    for (int i = 0; i < aux2 ; i++) {
        for (int j = 0; j < aux2 ; j++) {
            printf("%d ",aux1[i][j]);
        }
        printf("\n");
    }
}

void main () {
    int dim;
    int mA[TAM_MAT][TAM_MAT];

    printf("Informe o tamanho das matrizes: ");
    scanf("%d",&dim);

    geraMatriz(mA,dim);
    leMatriz(mA,dim);
}